
#include <iostream>
#include <iomanip>
#include "circle.h"
#include "cylinder.h"
#include <string.h>

using namespace std;

int main()
{
    cylinder service;
    double costPerCan;
    double height, radius;
    char input[100];
    float tank;
    float can;
    float pot;
    int selectedWidth;
    float canCostTank;// = 0.75;

    cout << "##########################################\n";
    cout << "  Welcome to TITO's construction company  \n";
    cout << "##########################################\n";

    // As the user to choose
    cout << "Choose from service we office> tank, can, pot :";

    // Get the user's input                               //Line 14
    cin >> input;

    //cost of each services
    if(strcmp(input, "tank") == 0){ canCostTank = 1.75;}
    else if
        (strcmp(input, "can") == 0){ canCostTank = 0.50;}
    else if
        (strcmp(input, "pot") == 0){canCostTank = 0.75;}
    /*else if
        (strcmp(input, "sprite") == 0){ canCostTank = sprite;}
    else if
        (strcmp(input, "nectar") == 0){ canCostTank = nectar;}
    */
    else {
    cout <<"You enter "<<input<<" which doesn't correspond to the service we offer\n";
    cout << "Try again later by selecting listed services.\n";
    //End program
        return 0;
    }

    cout << "How high do you want the "<<input<<" to be (in feet)?: ";
    cin >> height;

    cout << "How wide do you want the "<<input<<" to be (in feet)?: ";
    cin >>selectedWidth;
    radius = selectedWidth / 2;

    cout << "You have selected "<<input<<" which has a height of "<<height<<"feet"<<endl;                                           //Line 16

    service.setHeight(height);
    service.setRadius(radius);                       //Line 17

    cout << input<<" can contain "<<service.volume() <<" of any liquid.\n";
                                         //Line 18
    cout << "It will cost you $"<< canCostTank * service.volume() <<endl;                                //Line 19
    cout << endl;

    cout << "The total area of materials need to make "<<input<<" is "<<service.area()<<" by size so prepare a place or section that can accommodate it."<<endl;                                          //Line 20

   // service(2,3,4,5);
    circle c1;
    double x1 = 0.0;
    double y1= 0.0;

    c1.setCenter(3.0, 4.0);
    c1.getCenter(x1, y1);
    cout << "x:" << x1 << " y: " << y1 << endl;




    return 0;                                               //Line 40
}                                                           //Line 41
