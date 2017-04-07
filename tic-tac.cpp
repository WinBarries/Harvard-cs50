#include <iostream>

using namespace std;

void display(int table[][5], int row);
void filler(int table[][5], int row);
void filler2(int table[][5], int row);
void filler3(int table[][5], int row);
void filler4(int table[][5], int row);
void filler5(int table[][5], int row);
void initialize(char tic[3][3]);
int main()
{
	// 4 x 5 table
	const int row = 4;
	const int row1 = 4;
	const int col = 5;
	 char tic[3][3];

	int table1[row][col];
	int table2[row1][col];
	display(table1, row);
	filler(table1, row);
	display(table1, row);
	filler2(table1, row);
	display(table1, row);
	filler3(table2, row1);
	display(table2, row1);
	filler4(table2, row1);
	display(table2, row1);
	filler5(table2, row1);
	display(table2, row1);
}
void initialize(char tic[3][3])
{
	for (int i = 0; i < 3;i++)
	for (int j = 0; i < 3; j++)
		tic[i][j] = "O";

	cout << "Who would you lik to play with\n";
	cout << "A: Computer Player\n";
	cout << "B: Another Player\n";
	//Flush screen after player's input

	//Actions if Another player is choosen

		//Ask the user to enter the cell row
		//Ask the user to enter the cell col
	//Check if the cell is open
	//Incase the cell is open, ask for data from the player
	//Ask player 2 for entry
	//Check if winner exist
			//Check diagonals
			//Do the "o"
			//THAT PLAYER WINS


}


void display(int table[][5], int row)
{
	for (int i = 0; i <= row; i++)
	{
		for (int j = 0; j < 5; j++)
			cout << table[i][j] << " ";
		cout << endl;
		cout << endl;
	}
}

void filler(int table[][5], int row)
{
	for (int i = 0; i <= row; i++)
	{
		for (int j = 0; j < 5; j++)
			table[i][j] = j +1;
		cout << endl;
	}
}

void filler2(int table[][5], int row)
{
	for (int i = 0; i <= row; i++)
	{
		for (int j = 0; j < 5; j++)
			table[i][j] = j + i;
		cout << endl;
	}
}

void filler3(int table[][5], int row)
{
	for (int i = 0; i <= row; i++)
	{
		for (int j = 0; j < 5; j++)
		if (i == j){
			table[i][j] = j + 1;
		}
		else
			table[i][j] = 0;
		cout << endl;
	}
}

void filler4(int table[][5], int row)
{
	for (int i = 0; i <= row; i++)
	{
		for (int j = 0; j < 5; j++)
		if (i == 4- j){
			table[i][j] = j + 1;
		}
		else
			table[i][j] = 0;
		cout << endl;
	}

}

void filler5(int table[][5], int row)
{
	for (int i = 0; i <= row; i++)
	{
		for (int j = 0; j < 5; j++)
		if (i < j){
			table[i][j] =  1;
		}
		else
			table[i][j] = 0;
		cout << endl;
	}
}
