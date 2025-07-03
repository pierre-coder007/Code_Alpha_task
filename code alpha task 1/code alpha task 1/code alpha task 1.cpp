#include<iostream>
using namespace std;
string GPA(float gpa) {
	if (gpa >= 4.0) return "A+";
	else if (gpa >= 3.7) return "A-";
	else if (gpa >= 3.3) return "B+";
	else if (gpa >= 3.0) return "B";
	else if (gpa >= 2.7) return "B-";
	else if (gpa >= 2.3) return "C+";
	else if (gpa >= 2.0) return "C";
	else if (gpa >= 1.7) return "C-";
	else if (gpa >= 1.3) return "D+";
	else if (gpa >= 1.0) return "D";
	else return "F";
}
int main() {
	int courses;
	float credit, tch = 0, tgp = 0, degree, courseGPA;
	cout << "welcome to C++ CGPA calculator program !" << endl;
	cout << "----------------------------------------" << endl;
	cout << "dear student, please enter the number of courses: ";
	cin >> courses;
	cout << "enter the credit hours and your degree for each course" << endl;
	for (int i = 0; i < courses; i++) {
		cout << "\ncourse no. " << i + 1 << endl;
		cout << "enter the credit hours: ";
		cin >> credit;
		cout << "enter the degree: ";
		cin >> degree;

		courseGPA = degree * credit;
		tch += credit;
		tgp += courseGPA;
		string lettergrade = GPA(degree);
		cout << "the letter grade of this course is: " << lettergrade << endl;
		cout << "the GPA of this course is: " << courseGPA << endl;
		cout << "----------------------------------------" << endl;
	}
	cout << "the total credit hours is: " << tch << endl;
	cout << "the total grade points is: " << tgp << endl;
	cout << "the final CGPA is: " << tgp / tch << endl;
	return 0;
}