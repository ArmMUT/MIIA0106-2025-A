#include <iostream>
#include <string>
using namespace std;

struct Phone {
	string mobile;
	string home;
};
struct parent {
	string name;
	string relationship;
	Phone contact;
};
struct Student {
	string id;
	string nickname;
	string lineid;
	Phone myContact;
	parent myParent;
};
void inputStudent(Student& student) {
	cout << "Enter Student Information\n";
	cout << "ID: ";
	cin >> student.id;
	cout << "Nichname: ";
	cin >> student.nickname;
	cout << "Line ID: ";
	cin >> student.lineid;
	cout << "Mobile Number: ";
	cin >> student.myContact.mobile;
	cout << "Home Number: ";
	cin >> student.myContact.home;
	cout << "Parent-Name: ";
	cin >> student.myParent.name;
	cout << "Parent-Relationship: ";
	cin >> student.myParent.relationship;
	cout << "Parent Mobile Number: ";
	cin >> student.myParent.contact.mobile;
	cout << "Parent Home Number: ";
	cin >> student.myParent.contact.home;
}
void printStudent(const Student& student) {
	cout << "\n===== Student Information =====\n";
	cout << "ID : " << student.id << endl;
	cout << "Name : " << student.nickname << endl;
	cout << "LineID : " << student.lineid << endl;
	cout << "Parent : " 
		<< student.myParent.name << ", "
		<< student.myParent.relationship << ", "
		<< student.myParent.contact.mobile << ", "
		<< student.myParent.contact.home << ", " << endl;
}
	int main() {
		Student student;
		inputStudent(student);
		printStudent(student);
        return 0;
	}

