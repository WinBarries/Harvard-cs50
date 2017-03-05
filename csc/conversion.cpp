/////////////////////
//Name :  Kabir Bolatito
//Description:
//               A small c++ program that utilices menus to convert
//               distances and weight

　
#include <iostream>
using namespace std;

//functions prototypes
void mainmenu();
void distancemenu();
void weightmenu();
void inches_cm();
void inches_feet();
void inches_miles();
void pounds_kg();
void pounds_tons();
void pounds_ounces();
void askUser();
//Global variables

　
int main()
{
	//declaration

	//initialization

	mainmenu();

	
	askUser();
	
	return 0;
}

////////Display main menu

void mainmenu()
{
	//declaration
	int choice = 0;

	//initialization
	cout << "Please choose one of the following:" << endl;
	cout << "1.Convert distance" << endl;
	cout << "2.Convert weight" << endl;
	cin >> choice;
	switch (choice){
	case 1:
		system("cls");
		distancemenu(); break;
	case 2:
		system("cls");
		weightmenu(); break;
	default:/*garbage collector*/; cout << "Invalid choice" << endl;
	}

　
	//no return became this function is void
}

void distancemenu()
{
	int choice = 0;
	cout << "\n\nplease enter one of the following:" << endl;
	cout << "\t\t1.Convert inches to cm" << endl;
	cout << "\t\t2.Convert inches to feet" << endl;
	cout << "\t\t3.Convert inches to miles" << endl;
	cin >> choice;
	switch (choice){
	case 1:inches_cm(); break;
	case 2:inches_feet(); break;
	case 3:inches_miles(); break;
	default:/*garbage collector*/; cout << "Invalid choice" << endl;

　
	}
}

void weightmenu()
{
	int choice = 0;
	cout << "please enter one of the following:" << endl;
	cout << "\t\t1.Convert pounds to kg" << endl;
	cout << "\t\t2.Convert pounds to tons" << endl;
	cout << "\t\t3.Convert pounds to ounces" << endl;
	cin >> choice;
	switch (choice){
	case 1:pounds_kg(); break;
	case 2:pounds_tons(); break;
	case 3:pounds_ounces(); break;
	default:/*garbage collector*/cout << "Invalid choice" << endl;

	}
}

/////////////////
//this function converts inches to cm
void inches_cm()
{
	//declaration
	float inches;/////////////////////

//Name :  Kabir Bolatito

//Description:

//               A small c++ program that utilices menus to convert

//               distances and weight


　

#include <iostream>

using namespace std;


//functions prototypes

void mainmenu();

void distancemenu();

void weightmenu();

void inches_cm();

void inches_feet();

void inches_miles();

void pounds_kg();

void pounds_tons();

void pounds_ounces();

void askUser();

//Global variables


　

int main()

{

	//declaration


	//initialization


	mainmenu();


	

	askUser();

	

	return 0;

}


////////Display main menu


void mainmenu()

{

	//declaration

	int choice = 0;


	//initialization

	cout << "Please choose one of the following:" << endl;

	cout << "1.Convert distance" << endl;

	cout << "2.Convert weight" << endl;

	cin >> choice;

	switch (choice){

	case 1:

		system("cls");

		distancemenu(); break;

	case 2:

		system("cls");

		weightmenu(); break;

	default:/*garbage collector*/; cout << "Invalid choice" << endl;

	}


　

	//no return became this function is void

}


void distancemenu()

{

	int choice = 0;

	cout << "\n\nplease enter one of the following:" << endl;

	cout << "\t\t1.Convert inches to cm" << endl;

	cout << "\t\t2.Convert inches to feet" << endl;

	cout << "\t\t3.Convert inches to miles" << endl;

	cin >> choice;

	switch (choice){

	case 1:inches_cm(); break;

	case 2:inches_feet(); break;

	case 3:inches_miles(); break;

	default:/*garbage collector*/; cout << "Invalid choice" << endl;


　

	}

}


void weightmenu()

{

	int choice = 0;

	cout << "please enter one of the following:" << endl;

	cout << "\t\t1.Convert pounds to kg" << endl;

	cout << "\t\t2.Convert pounds to tons" << endl;

	cout << "\t\t3.Convert pounds to ounces" << endl;

	cin >> choice;

	switch (choice){

	case 1:pounds_kg(); break;

	case 2:pounds_tons(); break;

	case 3:pounds_ounces(); break;

	default:/*garbage collector*/cout << "Invalid choice" << endl;


	}

}


/////////////////

//this function converts inches to cm

void inches_cm()

{

	//declaration

	float inches;

	float cm;


	//initialization

	inches = 0;

	cm = 0;


	cout << "please enter the inches to convert :";

	cin >> inches;

	cm = inches *2.54;

	cout << inches << "inches is equivalent to " << cm <<"cm."<< endl;

	//no return becasue void

}


/////////////////

//this function converts inches to feet

void inches_feet()

{

	//declaration

	float inches;

	float feet;


	//initialization

	inches = 0;

	feet = 0;


	cout << "please enter the inches to convert :";

	cin >> feet;

	feet = inches / 12;

	cout << inches << "inches is equivalent to " << feet << "feet." << endl;

	//no return becasue void

}


/////////////////

//this function converts inches to feet

void inches_miles()

{

	//declaration

	float inches;

	double miles;


	//initialization

	inches = 0;

	miles = 0;


	cout << "please enter the inches to convert :";

	cin >> miles;

	miles = inches / 63360;

	cout << inches << "inches is equivalent to " << miles << "miles." << endl;

	//no return becasue void

}


/////////////////

//this function converts pounds to kg

void pounds_kg()

{

	//declaration

	float pounds;

	float kg;


	//initialization

	pounds = 0;

	kg = 0;


	cout << "please enter the inches to convert :";

	cin >> pounds;

	kg = pounds / 2.20462;

	cout << pounds << "pounds is equivalent to " << kg << "kg." << endl;

	//no return becasue void

}


　

/////////////////

//this function converts pounds to tons

void pounds_tons()

{

	//declaration

	float pounds;

	float tons;


	//initialization

	pounds = 0;

	tons = 0;


	cout << "please enter the inches to convert :";

	cin >> pounds;

	tons = pounds / 2000;

	cout << pounds << "pounds is equivalent to " << tons << "tons." << endl;

	//no return becasue void

}


/////////////////

//this function converts pounds to tons

void pounds_ounces()

{

	//declaration

	float pounds;

	float ounces;


	//initialization

	pounds = 0;

	ounces = 0;


	cout << "please enter the inches to convert :";

	cin >> pounds;

	ounces = pounds / 0.0625;

	cout << pounds << "pounds is equivalent to " << ounces << "ounces." << endl;

	//no return becasue void

}


void askUser()

{

	//declaration

	int choice = 0;


	//initialization

	cout << "Do you want to continue?" << endl;

	cout << "1. YES" << endl;

	cout << "2. NO" << endl;

	cin >> choice;

	switch (choice){

	case 1:

		system("cls");

		mainmenu(); break;

	

	default:/*garbage collector*/; cout << "BYE" << endl;

	}


　

	//no return became this function is void

}	
float cm;

	//initialization
	inches = 0;
	cm = 0;

	cout << "please enter the inches to convert :";
	cin >> inches;
	cm = inches *2.54;
	cout << inches << "inches is equivalent to " << cm <<"cm."<< endl;
	//no return becasue void
}

/////////////////
//this function converts inches to feet
void inches_feet()
{
	//declaration
	float inches;
	float feet;

	//initialization
	inches = 0;
	feet = 0;

	cout << "please enter the inches to convert :";
	cin >> feet;
	feet = inches / 12;
	cout << inches << "inches is equivalent to " << feet << "feet." << endl;
	//no return becasue void
}

/////////////////
//this function converts inches to feet
void inches_miles()
{
	//declaration
	float inches;
	double miles;

	//initialization
	inches = 0;
	miles = 0;

	cout << "please enter the inches to convert :";
	cin >> miles;
	miles = inches / 63360;
	cout << inches << "inches is equivalent to " << miles << "miles." << endl;
	//no return becasue void
}

/////////////////
//this function converts pounds to kg
void pounds_kg()
{
	//declaration
	float pounds;
	float kg;

	//initialization
	pounds = 0;
	kg = 0;

	cout << "please enter the inches to convert :";
	cin >> pounds;
	kg = pounds / 2.20462;
	cout << pounds << "pounds is equivalent to " << kg << "kg." << endl;
	//no return becasue void
}

　
/////////////////
//this function converts pounds to tons
void pounds_tons()
{
	//declaration
	float pounds;
	float tons;

	//initialization
	pounds = 0;
	tons = 0;

	cout << "please enter the inches to convert :";
	cin >> pounds;
	tons = pounds / 2000;
	cout << pounds << "pounds is equivalent to " << tons << "tons." << endl;
	//no return becasue void
}

/////////////////
//this function converts pounds to tons
void pounds_ounces()
{
	//declaration
	float pounds;
	float ounces;

	//initialization
	pounds = 0;
	ounces = 0;

	cout << "please enter the inches to convert :";
	cin >> pounds;
	ounces = pounds / 0.0625;
	cout << pounds << "pounds is equivalent to " << ounces << "ounces." << endl;
	//no return becasue void
}

void askUser()
{
	//declaration
	int choice = 0;

	//initialization
	cout << "Do you want to continue?" << endl;
	cout << "1. YES" << endl;
	cout << "2. NO" << endl;
	cin >> choice;
	switch (choice){
	case 1:
		system("cls");
		mainmenu(); break;
	
	default:/*garbage collector*/; cout << "BYE" << endl;
	}

　
	//no return became this function is void
}
