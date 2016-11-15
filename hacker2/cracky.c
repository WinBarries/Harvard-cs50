#include <stdio.h>
#include <crypt.h>
#include <unistd.h>
#include <string.h>
#include <cs50.h>
#include <stdlib.h>

// For crypt
#define _XOPEN_SOURCE

// Number of ASCII chars from ASCII 32 to ASCII 126
#define NUM_ASCII_CHARS 95

#define FALSE 0
#define TRUE 1

// A boolean is an integer. FALSE = 0, TRUE = 1.
typedef int boolean;

// Prototype functions
boolean compareCryptToCipher(char*, char*, char*, int);
boolean checkWordsOfLengthN(int, char*, char*, char*);
boolean dictionaryAttack(char*, char*, char*);

/*
@param argc - the number of arguments passed
@param *argv - an array of arguments passed
@return 0 - always returns 0 per the specification
This function initializes the ciphertext and salt. Then, it starts the dictionary attack 
and the brute force algorithm.
*/
int main(int argc, char* argv[])
{
    // This will hold the salt
    char* salt = malloc(3 * sizeof(char));
    
    // Defines all of the possible ASCII characters in a password
    char* charSpectrum = malloc(NUM_ASCII_CHARS * sizeof(char));
    for(int i = 0; i < NUM_ASCII_CHARS; i++)
    {
        // Insert a character into the character spectrum. 
        // Right shift by 32 because we want ASCII 32 to ASCII 126
        charSpectrum[i] = (char) i + 32;     
    }
    
    // If there's more or fewer than one argument, complain and finish.    
    if(argc != 2)
    {
        printf("Invalid arguments\n");
        return 0;
    }
 
    // Grab the cipher text and store it in ciphertext.
    char* ciphertext = malloc(14 * sizeof(char));
    memcpy(ciphertext, argv[1], 13);
    ciphertext[13] = 0;

    // Set the first two characters of ciphertext to salt.
    salt[0] = ciphertext[0];
    salt[1] = ciphertext[1];
    salt[2] = 0;
    
    // First try dictionary attack because it is faster than brute force
    // If there is a result from the dictionary attack, print it and return 0
    if(dictionaryAttack("/usr/share/dict/words", ciphertext, salt))
    {
        //Free memory so Christopher doesn't dock me design points
        free(salt);
        free(charSpectrum);
        free(ciphertext);
        return 0;
    }
    
    
    // Then brute force. The for loop checks all plaintext from length 1 to length 8.
    for(int wordLength = 1; wordLength <= 8; wordLength++)
    {      
        // If a word is found, yay we cracked the password!
        if(checkWordsOfLengthN(wordLength, charSpectrum, ciphertext, salt))
        {
            //Free memory so Christopher doesn't dock me design points
            free(salt);
            free(charSpectrum);
            free(ciphertext);
            return 0;
        }
    }
}


