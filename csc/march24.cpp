///////////////////////////////////////
// Name:	Kabir Bolatito
// 
#include <iostream>
#include <time.h>
using namespace std;

void filler(int a[10]);
void display(int a[10]);
void filler2(int a[10]);
void sort(int a[10]);
void filler3(int a[10]);


int main(){
	//declaration
	int num;
	int list[10];
	//first element is list[0]
	//second element is list[1]
	//:
	//last integar is list[9]
	//list[10] going outbound of array

	//intitialize the array
	for (int i = 0; i <= 9; i++)
	{
		list[i] = 0;
	}
	
	display(list);
	filler(list);
	display(list);
	filler2(list);
	return 0;
}

//Arrays in c++ are passed by reference
void filler(int a[10])
{
	for (int i = 0; i <= 9; i++){
		a[i] = i;
	}
		
}

void display(int a[10])
{
	for (int i = 0; i <= 9; i++)
		cout << a[i] << " ";
	cout << endl;
}

void filler2(int a[10])
{
	for (int i = 9; i <= 9; i--)
	{
		a[i] = 9 - i;
	}
}
void sort(int a[10])
{
	int holder;
	for (int i = 0; i < 10; i++)
	for (int j = 0; j < 10; j++)
	{
		int holder;
		if (a[j] > a[j + 1])
		{
			holder = a[j];
			a[j] = a[j + 1];
			a[j + 1] = holder;
		}
	}
}

void filler3(int a[10]){
	srand(time(NULL));
	for (int i = 0; i < 10; i++)
		a[i] = rand() % 2;
}
