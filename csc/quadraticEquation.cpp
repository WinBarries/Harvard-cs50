////////////////////////////////////////////////////
//	Name		: Kabir Bolatito
//	Date		: 1-28-2017
//  Description	: This project will solve the
//				  quadration equation ax^2+bx+c using the
//				  formular root = (-b +- sqrt(b^2 - 4ac))/2a
////////////////////////

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	// Declaration
    float a;
    float b;
    float c;
    float root1;
    float root2;
    float isReal;


	// Initialization
    a       = 0.0;
    b       = 0.0;
    c       = 0.0;
    isReal  = 0.0;
    root1   = 0.0;
    root2   = 0.0;

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
    isReal = (b*b - 4*a*c);

	// 8. If number was positive
		if (isReal >= 0)
        {

		// 8.a. Calculate the first square root:
			root1 = (-b - sqrt(b*b - 4 * a * c)) / (-2 * a);

		// 8.b. Calculate the second square root:
            root2 = (-b + sqrt(b*b - 4 * a * c)) / (-2 * a);

		// 8.c. Write down the equation (a x^2 + b x + c)
            cout << "The solution for equation " << a <<"x^2 + (" << b <<") x + ("<<c<<")"<<endl;

		// 8.d. Display the root calculated
		cout << "is x1 = "<<root1  << " and x2 = " << root2<<endl;
        }

	// 9. otherwise
        else

		// 9.a. Inform the user no real solution
        cout << "the equation No real solution \n";
}
