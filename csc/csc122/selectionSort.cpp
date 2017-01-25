/*
Name: Kabir Bolatito
Class: CSC 121
Description: Sorting out the scientist list
Date: 2017-01-24
*/

#include <iostream>

#include <string>

using namespace std;

//Declaring a function for the mininum value
int findminidx(string scientist[], int length);

//Declaring a function for the sorting the scientist array
void selectionSort(string scientist[], int length);

//Declaring a Swapping function
void swap(string scientist[], int i, int indexOfSmallest);

//main function to start the function
int main()

{
    //assigning the scientist elecments to scientist
	string scientist[7] = { "Newton", "Pascal", "Euler", "Gauss", "Bayes", "Fibonacci", "Turing" };

    cout << "Scientist unsorted: \n";

    //Loop to go through the array and display the unsorted Scientist array
	for (string name : scientist)

    //Printing out the name
	cout << name << " " << endl;

    //create a line before displaying the next function for visibility
    cout << endl;

    //Printing out the scientist with the smallest element
    cout <<  "The smallest scientist in the array is: " << scientist[findminidx(scientist, 7)] << endl;

    //create a line before displaying the next function for visibility
	cout << endl;

    //Display stating that sorted list will be presented
    cout << "Scientist Sort: \n" ;

    //Calling the sorted function, defined above
	selectionSort(scientist, 7);

	//loop function to go through the scientist array
	for (int i = 0; i < 7; i++)

        //printing out the sorted element one after another
		cout << scientist[i] << " " << endl;



    //return statement
	return 0;

}

//Selection sort function which performs the main operation
void selectionSort(string scientist[], int length) {

    //Declaring variables
	int i, minIndex;

    //looping through the array
	for (int i = 0; i < (length - 1); i++)
	{
		minIndex = i;

		for (int j = i + 1; j <length; j++)
		    {
		        //if the second element is less that the first element in the array
			    if (scientist[j] < scientist[i])

			        {  //swapping if j is less than i
				        swap(scientist, j, i);
			        }
		    }
	}

}

//function to find the smallest element in the array
int findminidx(string scientist[], int length) {

    //Declare a variable mininx to 0
	int mininx = 0;

    //loop through the
	for (int i = 1; i < length; i++)

	{
		if (scientist[i] < scientist[mininx])
				mininx = i;
	}

	    //return the smallest element in the array
		return mininx;
}

//the swap function
void swap(string scientist[], int i, int indexOfSmallest) {

    //temp holding current element in the scientist array
	string temp = scientist[i];

	//scientist[i] holds the smallest scientist
	scientist[i] = scientist[indexOfSmallest];

	//the element of the smallest gets temp value
	scientist[indexOfSmallest] = temp;
}
