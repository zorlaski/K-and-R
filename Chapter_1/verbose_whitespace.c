/*
*   Zack Orlaski
*   K&R Exercise 1-10: write a program to copy its input to its output, replacing each backspace, tab, and backslash with their escape sequences
*   8/29/20
*/

#include <stdio.h>

int main(){

    int cur = ' ';

    while((cur = getchar()) != EOF){
        if(cur =='\b'){
            putchar('\\'); 
            putchar('b');
        }
        else if(cur =='\t'){
            putchar('\\'); 
            putchar('t');
        }
        
        else if(cur =='\\'){
            putchar('\\'); 
            putchar('\\');
        }
        else
            putchar(cur);

        
    }
    putchar('\n');
    return 0;
}