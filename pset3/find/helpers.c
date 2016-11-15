/**
 * helpers.c
 *
 * Computer Science 50
 * Problem Set 3
//// *
 * Helper functions for Problem Set 3.
 */
       
#include <cs50.h>

#include "helpers.h"

/**
 * Returns true if value is in array of n values, else false.
 */

bool search(int value, int values[],int n)
{
    //Search each element one after another
    for(int i = 0; i < n; i++)
        if(values[i] == value)
            return true;
    return false;
}

void sort(int values[], int n)
    // TODO: implement an O(n^2) sorting algorithm
    //return;
{
    //Declaring the variables
       int temp, min, i, j;

	if (n<=1) 
	return;

	for (i=0; i<n; i++)
	{
		min = i;

		for (j=i; j<n; j++)
		{
			if (values[min]>values[j])
			{
				min=j;
			}
		}
//SWAP SORTED ELEMENT
		temp = values[i];
		values[i] = values[min];
		values[min] = temp;
	}

    return;
}

