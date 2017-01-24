/*

Name: Kabir, Bolatito
Class: CSC 122
Date: 2017-01-23
Purpose: The purpose of this code is to find the largest in an array and printing for visualization

*/

#include <iostream>

using namespace std;

//A sub-function, declaring the array and the its size.
int FindLargest (int arr1[], int size)

    {
        //Setting the function largest to the be the first function of the array
        int largest = arr1[0];

        //iterate through the array, based on the size of the array
        for(int i = 0; i < size; i++)

            {
                //An if statement to check if arr[i] is the largest
                if( arr1[i] > largest)

                {
                    //setting largest to be the largest, if the above is true.
                    largest = arr1[i];

                }

            }

        //Return the largest in the array
          return largest;

    }


//Declaring a main function to start the program
int main()

{
    //Declaring an array
    int arr1[] = {2,16,6,9,5,1,25};

    //Printing thr largest to the screen for visualization
    cout << "The largest value is: " << FindLargest(arr1, 7) << endl;



    return 0;

}
