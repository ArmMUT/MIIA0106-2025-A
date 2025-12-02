// LAB302.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
		using namespace std;

	int main() {
		string studentID;
		string name;
		
	 int score = 85;

		cout << "Enter StudentID:";
		cin >> studentID;
    	cout << "Enter Name:";
		cin >> name;
		cout << "Enter Score:";
		cin >> score;

		cout << "----------- Student Report -----------" << endl;
		cout << "Student ID  :" << studentID << endl;
		cout << "Name        :" << name <<endl;
		cout << "Score       :" << score << endl;
		

		if (score >= 90) {
		cout << "Grade   : A" << endl;
		}
		else if (score >= 80) {
		cout << "Grade   :B" << endl;
		}
		else if (score >= 70) {
		cout << "Grade   :C" << endl;
		}
		else {
		cout << "Grade   :F" << endl;
		}
		cout << "--------------------------------------" << endl;
		

		return 0;
	}
