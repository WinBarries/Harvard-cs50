////////////////////////////////////////////////////
//	Name		: Kabir Bolatito
//	
//  Description	: This program will show the reverse of factorial
//                 
////////////////////////

#include <iostream>
using namespace std;

///function prototype
void menu();

void Addition();
void Subtraction();
void Multiplcation();
void Division();
void factorial();
void prime();
void quadraticEquation();
//global variable

int main()
{
	

	menu();
	

	return 0;
}

////////////////
//Menu Function
void menu(){
	//Declaration
	int choice;
	cout << "please choose one of the following : \n";
	cout << "\t\t1. Addition" << endl;
	cout << "\t\t2. Subtraction" << endl;
	cout << "\t\t3. Multiplcation" << endl;
	cout << "\t\t4. Division" << endl;
	cout << "\t\t5. Factorial" << endl;
	cout << "\t\t6. Prime" << endl;
	cout << "\t\t7. Quadratic Equation" << endl;
	cin >> choice;
	switch (choice)
	{
	case 1:Addition(); break;
	case 2:Subtraction(); break;
	case 3:Multiplcation(); break;
	case 4:Division(); break;
	case 5:factorial(); break;
	case 6:prime(); break;
	case 7:quadraticEquation(); break;
	default:cout << "Not a valid option" << endl;
	}

}
/////////////////////
//adition function
void Addition()
{
	int x, y, result;
	cout << "Please enter the first integer : ";
	cin >> x;
	cout << "Please enter the second integer : ";
	cin >> y;
	result = x + y;
	cout << "The addition of " << x << " and " << y << " is " << result << endl;
}

void Subtraction()
{
	int x, y, result;
	cout << "Please enter the first integer : ";
	cin >> x;
	cout << "Please enter the second integer : ";
	cin >> y;
	result = x - y;
	cout << "The subtraction of " << x << " and " << y << " is " << result << endl;
}

void Multiplcation()
{
	int x, y, result;
	cout << "Please enter the first integer : ";
	cin >> x;
	cout << "Please enter the second integer : ";
	cin >> y;
	result = x * y;
	cout << "The subtraction of " << x << " and " << y << " is " << result << endl;
}

void Division()
{
	int x, y, result;
	cout << "Please enter the first integer : ";
	cin >> x;
	cout << "Please enter the second integer : ";
	cin >> y;
	result = x / y;
	cout << "The subtraction of " << x << " and " << y << " is " << result << endl;
}

void factorial()
{
	int reverse;
	int counter = 0;
	int current = 1;

	//1. ask the user for a number

	//2. collect the number

	//3. check if that number was a result of 1!

	//4. repeat step 3

	//5. stop if you reached a value that is greater than the user's input
	//meaning that number was never result of a factorial

	cout << "Please enter an integer : ";
	cin >> reverse; //hold the value the user entered.


	while (current < reverse)
	{
		counter++;
		current = current * counter;
	}
	if (reverse == current)
		cout << "HAHA this is a result of " << counter << "!" << endl;
	else
		cout << "you are above and beyond,the closest factorial is " << counter - 1 << endl;

}

void prime()
{
	//Declaration
	int floor;
	int ceiling;
	int primeChecker;
	int temp;

	// Ask the user to enter two numbers they want to check the prime number
	cout << "Enter two numbers intervals you want to check their prime number: ";
	cin >> floor >> ceiling;

	//swapping numbers if the first argument if larger than the second argument input by the user
	if (floor > ceiling)
	{
		//Alert the user what they entered and
		cout << "You entered a high value and a smaller value, however, we got your back\n";
		cout << "The prime numbers between " << floor << " and " << ceiling << " are: ";

		//temp to hold the first input(floor)
		temp = floor;

		//parsing the value for ceiling into floor
		//floor now has the second user's argument which will be smaller value
		floor = ceiling;

		//parsing the originally stored argument which was given to temp into ceiling
		//ceiling will now have the larger value
		ceiling = temp;

	}

	// An else statement if the user entered a small argument first then a larger argument
	else{

		//Tell the user the prime numbers in between their interval
		cout << "The prime numbers between " << floor << " and " << ceiling << " are: ";

	}
}

void quadraticEquation()
{
	float a;
	float b;
	float c;
	float root1;
	float root2;
	float isReal;


	// Initialization
	a = 0.0;
	b = 0.0;
	c = 0.0;
	isReal = 0.0;
	root1 = 0.0;
	root2 = 0.0;

	// 1. Ask the user for the coeef of x^2
	cout << "Please enter the coefficient of x^2: ";

	// 2. Collect the coeef.(i.e a)
	cin >> a;

	// 3. As the user for the coeef. of x
	cout << "Please enter the coefficient of x: ";

	// 4. Collect the coeef.(i.e b)
	cin >> b;

	// 5. Ask the user for the constant
	cout << "Please enter the constant: ";

	// 6. Collect the constant (i.e c)
	cin >> c;

	// 7. Calculate (b*b - 4*a*c)
	isReal = (b*b - 4 * a*c);

	// 8. If number was positive
	if (isReal >= 0)
	{

		// 8.a. Calculate the first square root:
		root1 = (-b - sqrt(b*b - 4 * a * c)) / (-2 * a);

		// 8.b. Calculate the second square root:
		root2 = (-b + sqrt(b*b - 4 * a * c)) / (-2 * a);

		// 8.c. Write down the equation (a x^2 + b x + c)
		cout << "The solution for equation " << a << "x^2 + (" << b << ") x + (" << c << ")" << endl;

		// 8.d. Display the root calculated
		cout << "is x1 = " << root1 << " and x2 = " << root2 << endl;
	}

	// 9. otherwise
	else

		// 9.a. Inform the user no real solution
		cout << "the equation No real solution \n";
}
