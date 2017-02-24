
#include <iostream>                                         //Line 1
#include <iomanip>                                          //Line 2
#include "circle.h"                                          //Line 3
#include "cylinder.h"
#include <string.h>                                      //Line 4

using namespace std;                                        //Line 5

int main()                                                  //Line 6
{                                                           //Line 7
    cylinder can;
    circle arc;                                  //Line 8
    double costPerCan;                                //Line 9
    double CostForDiagnose;                     //Line 10
    double height, radius;                                   //Line 11
    double medicalCost;
    char a[100];
    float coke, sprite = 44.0;
    float creamSoda = 49.0;
    float nectar = 35.0;
    float pepsi = 41.0;

    cout << "Enter which soda you consume the most over the last 30 days\n";
    cout << " choose from the following: coke, sprite,creamSoda, nectar\n";

                                   //Line 14
    cin >> a;
    if(strcmp(a, "pepsi") == 0){ height = pepsi;}
    else if
        (strcmp(a, "coke") == 0){ height = coke;}
    else if
        (strcmp(a, "creamSoda") == 0){height = creamSoda;}
    else if
        (strcmp(a, "sprite") == 0){ height = sprite;}
    else if
        (strcmp(a, "nectar") == 0){ height = nectar;}

    else {
    cout <<"You enter "<<a<<" which doesn't correspond to the soda product mentioned above\n";
    cout << "Try again later buy selecting listed soda products.\n";
    //End program
        return 0;
    }

    cout << "you have selected "<<a<<" which has "<<height<<"g sugar content"<<endl;                                           //Line 16

    can.setHeight(height);                       //Line 17

    cout << "Line 18: Enter the cost of a can of soda "<< "(per can): $";                                //Line 18
    cin >> radius;
    arc.setRadius(radius);                               //Line 19
    cout << endl;                                           //Line 20

    cout << "Line 21: Enter the cost of doctor's diagnoses "<< "medical co Pay: $";                         //Line 21
    cin >> CostForDiagnose;                     //Line 22
    cout << endl;                                           //Line 23

    medicalCost = can.volume() * costPerCan + can.area() * CostForDiagnose;  //Line 24

    cout << "The medical cost for soda intake diagnosis is: $" << medicalCost
         << endl;                                           //Line 25

   // boxType package;                                        //Line 26
    //double height;                                          //Line 27
    //double wrappingCostPerSquareFeet;                       //Line 28

    //cout << "Line 29: Enter the length, width, and height "
      //   << "of the package (in feet): ";                   //Line 29
    //cin >> length >> width >> height;                       //Line 30
    //cout << endl;                                           //Line 31

    //package.setDimension(length, width, height);            //Line 32

    //cout << "Line 33: Enter the cost (25 to 50 cents) of "
      //   << "wrapping per square foot: ";                   //Line 33
    //cin >> wrappingCostPerSquareFeet;                       //Line 34
    //cout << endl;                                           //Line 35

    //billingAmount = wrappingCostPerSquareFeet
      //              * package.area() / 100;                 //Line 36

    //if (billingAmount < 1.00)                               //Line 37
      //  billingAmount = 1.00;                               //Line 38

    //cout << "Line 39: Amount due: $" << billingAmount
      //   << endl;                                           //Line 39

    return 0;                                               //Line 40
}                                                           //Line 41
