#include "inheritance4.h"
#include <iostream>
using namespace std;

int main()
{
	Person *advisor;
	Faculty *pf;
	TFaculty *ptf;
	Student *student1;

	ptf = new TFaculty("Indiana Jones", ARCHEOLOGY, "Dr.");

	advisor = new TFaculty("Tito", COMPUTER_SCIENCE, "DR");

	student1 = new Student("james", COMPUTER_SCIENCE, advisor);

	cout << student1->getName() << " - " << Discipline[student1->getMajor()] << endl;




	// Assigment from base to derived needs a cast
	TFaculty *ptf1;
	ptf1 = static_cast<TFaculty *>(advisor);


	return 0;
}



=================================
#include <string>
using namespace std;

enum Discipline { ARCHEOLOGY, BIOLOGY, COMPUTER_SCIENCE };
enum Classification { FRESHMAN, SOPHOMORE, JUNIOR, SENIOR };

class Person
{
protected:
	string name;
public:
	Person() 
	{ 
		setName(""); 
	}
	Person(string pName) 
	{ 
		setName(pName); 
	}
	void setName(string pName) 
	{ 
		name = pName; 
	}
	string getName() const 
	{ 
		return name; 
	}
};

class Student :public Person
{
private:
	Discipline major;
	Person *advisor;
public:

	Student(string sname, Discipline d, Person *adv)
		: Person(sname)
	{
		major = d;
		advisor = adv;
	}
	void setMajor(Discipline d) 
	{ 
		major = d; 
	}
	Discipline getMajor() const 
	{ 
		return major; 
	}
	void setAdvisor(Person *p) 
	{ 
		advisor = p; 
	}
	Person *getAdvisor() const
	{ 
		return advisor; 
	}
};

class Faculty :public Person
{
private:
	Discipline department;
public:
	Faculty(string fname, Discipline d) : Person(fname)
	{
		department = d;
	}
	void setDepartment(Discipline d) { department = d; }
	Discipline getDepartment() const { return department; }
};

class TFaculty : public Faculty
{
private:
	string title;
public:
	TFaculty(string fname, Discipline d, string title)
		: Faculty(fname, d)
	{
		setTitle(title);
	}
	void setTitle(string title) { this->title = title; }

	// Override getName()
	string getName() const
	{
		return title + " " + Person::getName();
	}
};
