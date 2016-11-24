#include <iostream>
using namespace std;

class Set {
public:
    Set();
    Set(const Set &s);
    ~Set();
    const Set &operator=(const Set &right);
    int getSize() const;
    void clear();
    bool isEmpty();
    bool contain(int value);
    void add(int value);
    void remove(int value);
    Set operator+(const Set &right);       // 集合的并
    Set operator*(const Set &right);        // 集合的交
    Set operator-(const Set &right);        // 集合的差
    bool operator==(const Set &right);
    bool operator<=(const Set &right);  // 判断某个集合是否是另一个集合的子集
	bool operator<(const Set &right);    // 判断某个集合是否是另一个集合的真子集
private:
    int *pSet;
    int size;
    int capacity;
    void ensureCapacity();
friend ostream &operator<<(ostream &out, const Set &s);
};

void Set::ensureCapacity() {
	if(size >= capacity) {
		int *old = pSet;
		capacity = 2 * size;
		pSet = new int[capacity];
		for(int i = 0; i < size; ++i)
			pSet[i] = old[i];
		delete[] old;
	}
}
Set::Set() {
    size = 0;
    capacity = 16;
    pSet = new int[capacity];
}
Set::Set(const Set& s) {
	size = s.size;
	capacity = s.capacity;
	pSet = new int[capacity];
	for(int i = 0; i < size; ++i)
        pSet[i] = s.pSet[i];
}
Set::~Set() {
    delete [] pSet;
}
const Set &Set::operator=(const Set &right) {
    if(this != &right) {
        if(size != right.size) {
            delete[] pSet;
            size = right.size;
            capacity = right.capacity;
            pSet = new int[capacity];
        }
        for(int i = 0; i < size; ++i)
            pSet[i] = right.pSet[i];
    }
    return *this;
}
int Set::getSize() const {
    return size;
}
void Set::clear() {
    size = 0;
}
bool Set::isEmpty() {
    return size == 0;
}
bool Set::contain(int value) {
    for(int i = 0; i < size; ++i)
        if(pSet[i] == value)
            return true;
	return false;
}
void Set::add(int value) {
    ensureCapacity();
	if(!contain(value))
		pSet[size++] = value;
}
void Set::remove(int value) {
	for(int i = 0; i < size; ++i)
		if(pSet[i] == value) {
			for(int j = i; j < size - 1; ++j)
				pSet[j] = pSet[j + 1];
			--size;
		}
}
Set Set::operator+(const Set &right) {
	Set temp(*this);
	for(int i = 0; i < right.size; ++i)
		temp.add(right.pSet[i]);
	return temp;
}
Set Set::operator*(const Set &right) {
	Set intersection;
	Set temp(*this);
	for(int i = 0; i < right.size; ++i) {
		if(temp.contain(right.pSet[i]))
			intersection.add(right.pSet[i]);
	}
	return intersection;
}
Set Set::operator-(const Set &right) {
	Set temp(*this);
	for(int i = 0; i < right.size; ++i) {
		if(temp.contain(right.pSet[i]))
			temp.remove(right.pSet[i]);
	}
	return temp;
}
bool Set::operator==(const Set &right) {
    if(size != right.size)
		return false;
    for(int i = 0; i < size; ++i)
		if(!contain(right.pSet[i]))
			return false;
    return true;
}
bool Set::operator<=(const Set& right) {
	if(size > right.size)
		return false;
    Set temp(right);
    for(int i = 0; i < size; ++i)
		if(!temp.contain(pSet[i]))
			return false;
    return true;
}
bool Set::operator<(const Set &right) {
    if((size < right.size) && (*this <= right))
		return true;
    return false;
}
ostream &operator<<(ostream &out, const Set &s) {
    out << "{";
	for(int i = 0; i < s.size - 1; ++i)
        out << s.pSet[i] << ",";
	if(s.size > 0)
        out <<  s.pSet[s.size - 1];
	out << "}";
	return out;
}



int main() {
    Set set1;
    if(set1.isEmpty())
        cout << "集合set1为空!" << endl;
	cout << "往集合set1中添加元素" << endl;
    set1.add(1);
    set1.add(2);
    set1.add(3);
	set1.add(3);
    cout << "集合set1的值: " << set1 << endl;
	cout << "从集合set1中删除元素" << endl;
	set1.remove(3);
	cout << "集合set1的值: " << set1 << endl;
	cout << "集合set1的元素个数: " << set1.getSize() << endl;
	Set set2, set3;
	cout << "往集合set2中添加元素" << endl;
	set2.add(10);
	set2.add(2);
	set2.add(-8);
	set2.add(1);
	cout << "集合set2的值: " << set2 << endl;
	set3 = set1 + set2;
	cout << "集合set1" << set1 << "和集合set2" << set2 << "的并集: "
	         << set3 << endl;
	set3 = set1 * set2;
	cout << "集合set1" << set1 << "和集合set2" << set2 << "的交集: "
	         << set3 << endl;
	set3 = set1 - set2;
	cout << "集合set1" << set1 << "和集合set2" << set2 << "的差集: "
	         << set3 << endl;
	if(set1 == set2)
		cout << "集合set1和set2相等!" << endl;
	else
		cout << "集合set1和set2不相等!" << endl;
	if(set1 < set2)
		cout << "集合set1是集合set2的真子集" << endl;
	else
		cout << "集合set1不是集合set2的真子集" << endl;
	return 0;
}
