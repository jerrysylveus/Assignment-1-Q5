//
//  main.c
//  Assignment 1 Q5
//
//  Created by Jerry Sylveus on 4/4/16.
//  Copyright © 2016 Jerry Sylveus. All rights reserved.
//



/*********************************************************************
 ** Program Filename: Q5.c
 ** Author: Jerry Sylveus
 ** Date: 4/10/16
 ** Description: This is a program that takes a word and printed it in 
    sticky caps.
 ** Input: The user inputs a word
 ** Output: The word is printed out in stick caps.s
 *********************************************************************/


#include <stdio.h>
#include <stdlib.h>


/*********************************************************************
 ** Function: Converts to upper case
 ** Description: Converts the letter to upper case
 ** Parameters: Takes a char as parameter
 ** Pre-Conditions: Converts the letter to upper case
 ** Post-Conditions: The letter is converted to an upper case
 *********************************************************************/

/*converts ch to upper case, assuming it is in lower case currently*/
char toUpperCase(char ch){
    return ch-'a'+'A';
}

/*********************************************************************
 ** Function: Converts to lower case
 ** Description: Converts a letter to lower case
 ** Parameters: Takes a char as parameter
 ** Pre-Conditions: Converst the letter to lower case
 ** Post-Conditions: The letter has been converted to lower case
 *********************************************************************/
/*converts ch to lower case, assuming it is in upper case currently*/

char toLowerCase(char ch){
    return ch-'A'+'a';
}


/*********************************************************************
 ** Function: Sticky(char* word)
 ** Description: A word is modied to appear with the letters in alternating
    lower and upper case
 ** Parameters: Takes a char
 ** Pre-Conditions: The word is to be in sticky caps
 ** Post-Conditions: The word is printed in sticky caps
 *********************************************************************/
void sticky(char* word){
    /*Convert to sticky caps*/
    for(int i=0;i<=strlen(word);i++)
    {
        if((word[i] >= 'a') && (i%2 == 0)) /*lower case & even number (0, 2, 4 etc)*/
        {
            word[i] = toUpperCase(word[i]);
        }
        else if((word[i] <= 'Z') && (i%2 == 1)) /*upper case & odd number */
        {
            word[i] = toLowerCase(word[i]);
        }
    }
    
}




int main(int argc, const char * argv[]) {
   
    printf("Enter a word below and i will convert it to ''sticky caps''.\n");
    
    /*Read word from the keyboard using scanf*/
    char myword[40];
    scanf("%s", myword);
    
    /*Call sticky*/
    sticky(myword);
    
    /*Print the new word*/
    printf("%s\n", myword);

    
    return 0;
}





