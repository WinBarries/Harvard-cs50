/**
 * helpers.h
 *
 * Computer Science 50
 * Problem Set 3
 *
 * Helper functions for Problem Set 3.
 */
 
#include <cs50.h>

/**
 * Returns true if value is in array of n values, else false.
 */
bool search(int value, int values[], int n);

/**
 * Sorts array of n values.
 */
void sort(int values[], int n);
/**{
int temp, index_of_min, i, j;

	if (n<=1) return;

	for (i=0; i<n; i++)
	{
		index_of_min = i;

		for (j=i; j<n; j++)
		{
			if (values[index_of_min]>values[j])
			{
				index_of_min=j;
			}
		}
		temp = values[i];
		values[i] = values[index_of_min];
		values[index_of_min] = temp;
	}

    return;
}**/
