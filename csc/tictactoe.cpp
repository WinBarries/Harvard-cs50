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
void id();
void playerInput();
void Players();
void table();
char checkWinner();
void ticTac();

//Global variable
//Draw the tic-tac rows and colum
char draw[][3] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};
char player = 'X';
bool b = true;

int main() {
    
    cout << " ##### TIC TAC TOE #######\n";
    cout << "To play, you have to choose anumber between 1 to 9\n\n";
    //Show the tic tac draw board
    table();
    
    //Provide user's information
    id();
    
    //Play the game
    ticTac();
    return 0;
}

/////////////
//Tic Tac game
void ticTac()
{
    //Declaration
    int i =0;
    
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
            cout << "The winner is player one - X \n";
            cout << "THE END"<< endl;
            
            //End Game
            break;
        }
        //Check if player two is the winner
        else if (checkWinner() == 'O')
        {
            //Display the winner
            cout << "The winner is player two - O \n";
            cout << "THE END"<< endl;
            
            //End Game
            break;
        }
        //Check if its a draw, when number of input is 9
        else if ( i == 9 )
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
            cout << "Your turn player One X: ";
        //Alert second player
        else
            cout << "your turn player Two O: ";
        
    }
}
//User ID information displayer
void id()
 {
 cout <<"PLAYER ONE IS X \n";
 cout <<"PLAYER TWO IS O \n";
 cout << "Choose a cell numbered from 1 to 9 as above \n";
 cout <<"Player 1 -X goes first | Player 2 -O follows \n";
 cout <<"Player One: ";
 
 }

// Display the current tic-tac board table
void table(){
    
    for (int i = 0; i < 3; i++)
    {
        cout << "----------"<<endl;
        for (int j = 0; j < 3; j++)
        {
            
            cout << "|"<<draw[i][j] << " ";
        }
            cout <<"|"<<endl;
    }
    cout << "----------"<<endl;
}

//Matching player's input to respective section on the drawing board
//Also lock each space after each entry to avoid reEntry
void playerInput()
{
    int a;
    cin >> a;
    
    if (a == 1)
    {
        if (draw[0][0] == '1')
            draw[0][0] = player;
        else
        {
            cout<<" Occupied, player "<<player<<"try a different spot: ";
            playerInput();
        }
    }
    else if (a == 2)
        if (draw[0][1] == '2')
            draw[0][1] = player;
        else
        {
            cout<<" Occupied, player "<<player<<"try a different spot: ";
            playerInput();
        }
    else if (a == 3)
        if (draw[0][2] == '3')
            draw[0][2] = player;
        else
        {
            cout<<" Occupied, player "<<player<<"try a different spot: ";
            playerInput();
        }
    else if (a == 4)
        if (draw[1][0] == '4')
            draw[1][0] = player;
        else
        {
            cout<<" Occupied, player "<<player<<"try a different spot: ";
            playerInput();
        }
    else if (a == 5)
        if (draw[1][1] == '5')
            draw[1][1] = player;
        else
        {
            cout<<" Occupied, player "<<player<<"try a different spot: ";
            playerInput();
        }
    else if (a == 6)
        if (draw[1][2] == '6')
            draw[1][2] = player;
        else
        {
            cout<<" Occupied, player "<<player<<"try a different spot: ";
            playerInput();
        }
    else if (a == 7)
        if (draw[2][0] == '7')
            draw[2][0] = player;
        else
        {
            cout<<" Occupied, player "<<player<<"try a different spot: ";
            playerInput();
        }
    else if (a == 8)
        if (draw[2][1] == '8')
            draw[2][1] = player;
        else
        {
            cout<<" Occupied, player "<<player<<"try a different spot: ";
            playerInput();
        }
    else if (a == 9)
        if (draw[2][2] == '9')
            draw[2][2] = player;
        else
        {
            cout<<" Occupied, player "<<player<<"try a different spot: ";
            playerInput();
        }
    
    //Error handling if user's entry not on the drawing board.
    else if (a > 9)
    {
        b = false;
        cout << a << " is Invalid entry. The End. \n";
        cout <<"Below is last entry before game invalid input. \n";
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

//Check who win the game
char checkWinner()
{
    //first player
    //Check horizontally
    if (draw[0][0] == 'X' && draw[0][1] == 'X' && draw[0][2] == 'X')
        return 'X';
    if (draw[1][0] == 'X' && draw[1][1] == 'X' && draw[1][2] == 'X')
        return 'X';
    if (draw[2][0] == 'X' && draw[2][1] == 'X' && draw[2][2] == 'X')
        return 'X';
    //check vertically
    if (draw[0][0] == 'X' && draw[1][0] == 'X' && draw[2][0] == 'X')
        return 'X';
    if (draw[0][1] == 'X' && draw[1][1] == 'X' && draw[2][1] == 'X')
        return 'X';
    if (draw[0][2] == 'X' && draw[1][2] == 'X' && draw[2][2] == 'X')
        return 'X';
    //Check diagonally
    if (draw[0][0] == 'X' && draw[1][1] == 'X' && draw[2][2] == 'X')
        return 'X';
    if (draw[2][0] == 'X' && draw[1][1] == 'X' && draw[0][2] == 'X')
        return 'X';
    
    //second player
    //check horizontally
    if (draw[0][0] == 'O' && draw[0][1] == 'O' && draw[0][2] == 'O')
        return 'O';
    if (draw[1][0] == 'O' && draw[1][1] == 'O' && draw[1][2] == 'O')
        return 'O';
    if (draw[2][0] == 'O' && draw[2][1] == 'O' && draw[2][2] == 'O')
        return 'O';
    //check vertically
    if (draw[0][0] == 'O' && draw[1][0] == 'O' && draw[2][0] == 'O')
        return 'O';
    if (draw[0][1] == 'O' && draw[1][1] == 'O' && draw[2][1] == 'O')
        return 'O';
    if (draw[0][2] == 'O' && draw[1][2] == 'O' && draw[2][2] == 'O')
        return 'O';
    //check diagonally
    if (draw[0][0] == 'O' && draw[1][1] == 'O' && draw[2][2] == 'O')
        return 'O';
    if (draw[2][0] == 'O' && draw[1][1] == 'O' && draw[0][2] == 'O')
        return 'O';
    
    return '\n';
}
