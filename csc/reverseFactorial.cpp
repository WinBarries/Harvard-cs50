////////////////////////////////////////////////////
//	Name		: Kabir Bolatito
//	
//  Description	: This program will show the reverse of factorial
//                 
////////////////////////

#include <iostream>
using namespace std;

///function prototype

//global variable

int main()
{
	// Declaration
	int reverse;
	int counter=0;
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
		cout << "you are above and beyond,the closest factorial is " << counter-1 << endl;
	return 0;
}
