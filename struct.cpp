#include <iostream>
#include <string>

using namespace std;

struct nameType {
	string first;
	string last;
	courseType course;
};

struct courseType {
	string name;
	int callNum;
	int credits;
	char grade;
};

struct studentType {
	nameType name;
	double gpa;
	courseType course;
};

int main() {
	nameType name;
	name.first = "kabir";
	name.last = "Bolatito";
	cout << name.first << " " << name.last << endl;
	
	studentType student;
	studentType classList[100];
	courseType course;
	nameType name;

	student.course.callNum = 230;
	cout << student.course.callNum << endl;

	cout << "enter your first name: " << endl;
	cin >> student.name.first; 


}