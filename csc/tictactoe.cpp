//
//  main.cpp
//  tic-tac-toe
//
//  Created by Bolatito Kabir on 4/21/17.
//  Copyright © 2017 Bolatito Kabir. All rights reserved.
//

#include <iostream>

using namespace std;

//Function prototype
void id(string P1, string P2);
void playerInput();
void Players();
void table();
char checkWinner();
void ticTac();

//Global variable
//Draw the tic-tac rows and colum
char draw[][3] = { '1', '2', '3', '4', '5', '6', '7', '8', '9' };
char player = 'X';
bool b = true;

string P1,P2;

int main() {
    
    
    cout << " ##### TIC TAC TOE #######\n";
    //Ask for first player's name
    cout <<"Player one, enter your name: ";
    cin >> P1;
    //Ask for second player's name
    cout <<"Player two, enter your name: ";
    cin >>P2;
    cout << endl;
    cout <<"To play, you have to choose anumber between 1 to 9\n\n";
    
    //Show the tic tac draw board
    table();
    
    //Provide user's information
    id(P1,P2);
    
    
    //Play the game
    ticTac();
    return 0;
}

/////////////
//Tic Tac game
void ticTac()
{
    //Declaration
    int i = 0;
    
    //While statement
    while (b)
    {
        //Increament after each iteration
        i++;
        //Calling player's input
        playerInput();
        //Display tic tac table
        table();
        
        //Check if player one is the winner
        if (checkWinner() == 'X')
        {
            //Display the winner
            cout << "The winner is "<<P1<<endl;
            cout << "THE END" << endl;
            
            //End Game
            break;
        }
        //Check if player two is the winner
        else if (checkWinner() == 'O')
        {
            //Display the winner
            cout << "The winner is "<<P2<<endl;
            cout << "THE END" << endl;
            
            //End Game
            break;
        }
        //Check if its a draw, when number of input is 9
        else if (i == 9)
        {
            cout << "No winner, its a draw \n";
            cout << "THE END \n";
            break;
        }
        
        //Change player
        Players();
        
        //Set up and if statement to alert who will play next
        //Alert first player
        if (player == 'X')
            cout <<"X - "<< P1<<" its your turn: ";
        //Alert second player
        else
            cout <<"O - "<< P2<<" its your turn: ";
        
    }
}
//User ID information displayer
void id(string P1, string P2)
{
    
    cout << P1 <<" is player one with symbol X \n";
    cout << P2 <<" is player two with symbol O \n";
    cout << "Choose a cell number from 1 to 9 as above \n";
    cout << P1<<" plays first"<<" and "<< P2<<" follows \n";
    cout << "X - "<< P1 <<" play: ";
    
}

// Create and display the tic-tac board table for visualization
void table(){
    
    for (int i = 0; i < 3; i++)
    {
        cout << "----------" << endl;
        for (int j = 0; j < 3; j++)
        {
            
            cout << "|" << draw[i][j] << " ";
        }
        cout << "|" << endl;
    }
    cout << "----------" << endl;
}

//Matching player's input to respective section on the drawing board
//Also lock each space after each entry to avoid reEntry
void playerInput()
{
    int a;
    cin >> a;
    
    //Error handling if player's entry not on the drawing board.
    //Handle error if player enters a word, letter or a negative number
    while (!(a > 0 && a < 10))
    {
        //Cite criteria for validation
        cout << "Must be positive number between 1 to 9: ";
        cin.clear();
        cin.ignore(250, '\n');
        //Ask the player again
        cin >> a;
        
    }
    if (a == 1)
    {
        if (draw[0][0] == '1')
            draw[0][0] = player;
        else
        {
            cout << " Occupied, try a different spot: ";
            playerInput();
        }
    }
    else if (a == 2)
    {
        if (draw[0][1] == '2')
            draw[0][1] = player;
        else
        {
            cout << " Occupied, try a different spot: ";
            playerInput();
        }
    }
    else if (a == 3)
    {
        if (draw[0][2] == '3')
            draw[0][2] = player;
        else
        {
            cout << " Occupied, try a different spot: ";
            playerInput();
        }
    }
    else if (a == 4)
    {
        if (draw[1][0] == '4')
            draw[1][0] = player;
        else
        {
            cout << " Occupied, try a different spot: ";
            playerInput();
        }
    }
    else if (a == 5)
    {
        if (draw[1][1] == '5')
            draw[1][1] = player;
        else
        {
            cout << " Occupied, try a different spot: ";
            playerInput();
        }
    }
    else if (a == 6)
    {
        if (draw[1][2] == '6')
            draw[1][2] = player;
        else
        {
            cout << " Occupied, try a different spot: ";
            playerInput();
        }
    }
    else if (a == 7)
    {
        if (draw[2][0] == '7')
            draw[2][0] = player;
        else
        {
            cout << " Occupied, try a different spot: ";
            playerInput();
        }
    }
    else if (a == 8)
    {
        if (draw[2][1] == '8')
            draw[2][1] = player;
        else
        {
            cout << " Occupied, try a different spot: ";
            playerInput();
        }
    }
    else if (a == 9)
    {
        if (draw[2][2] == '9')
            draw[2][2] = player;
        else
        {
            cout << " Occupied, try a different spot: ";
            playerInput();
        }
    }
    
    
    
}

//Change player
void Players()
{
    if (player == 'X')
        player = 'O';
    else
        player = 'X';
}

//Check who win the game for first player and second player
char checkWinner()
{
    //first player validation
    //Check horizontally for winner
    if (draw[0][0] == 'X' && draw[0][1] == 'X' && draw[0][2] == 'X')
        return 'X';
    if (draw[1][0] == 'X' && draw[1][1] == 'X' && draw[1][2] == 'X')
        return 'X';
    if (draw[2][0] == 'X' && draw[2][1] == 'X' && draw[2][2] == 'X')
        return 'X';
    //check vertically for winner
    if (draw[0][0] == 'X' && draw[1][0] == 'X' && draw[2][0] == 'X')
        return 'X';
    if (draw[0][1] == 'X' && draw[1][1] == 'X' && draw[2][1] == 'X')
        return 'X';
    if (draw[0][2] == 'X' && draw[1][2] == 'X' && draw[2][2] == 'X')
        return 'X';
    //Check diagonally for winner
    if (draw[0][0] == 'X' && draw[1][1] == 'X' && draw[2][2] == 'X')
        return 'X';
    if (draw[2][0] == 'X' && draw[1][1] == 'X' && draw[0][2] == 'X')
        return 'X';
    
    //second player validation
    //check horizontally for winner
    if (draw[0][0] == 'O' && draw[0][1] == 'O' && draw[0][2] == 'O')
        return 'O';
    if (draw[1][0] == 'O' && draw[1][1] == 'O' && draw[1][2] == 'O')
        return 'O';
    if (draw[2][0] == 'O' && draw[2][1] == 'O' && draw[2][2] == 'O')
        return 'O';
    //check vertically for winner
    if (draw[0][0] == 'O' && draw[1][0] == 'O' && draw[2][0] == 'O')
        return 'O';
    if (draw[0][1] == 'O' && draw[1][1] == 'O' && draw[2][1] == 'O')
        return 'O';
    if (draw[0][2] == 'O' && draw[1][2] == 'O' && draw[2][2] == 'O')
        return 'O';
    //check diagonally for winner
    if (draw[0][0] == 'O' && draw[1][1] == 'O' && draw[2][2] == 'O')
        return 'O';
    if (draw[2][0] == 'O' && draw[1][1] == 'O' && draw[0][2] == 'O')
        return 'O';
    
    return 0;
}

