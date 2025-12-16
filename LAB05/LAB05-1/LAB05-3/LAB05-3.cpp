#include <iostream>
using namespace std;
// Call by Value
void Value(int a, int b) {
	int temp = a;
	a = b;
	b = temp;
}

void Reference(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
}
int main() {
	int a = 10, b = 20;
	cout << "Before swap:";
	cout << "a = " << a << ", b = " << b << endl;
	Value(a, b);   // ส่งค่าแบบcopy (Call by Value)
	cout << "After swap (Call by Value):";
	cout << "a = " << a << ", b = " << b << endl;

	Reference(a, b);   // เรียกแบบreference
	cout << "After swap(Call by Reference):";
	cout << "a = " << a << ", b = " << b << endl;
	return 0;
}