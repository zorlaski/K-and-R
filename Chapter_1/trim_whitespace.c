/*
*   Zack Orlaski
*   K&R Exercise 1-9: write a program to copy its input to its output, replacing each string of one or more blanks by a single blank
*   8/29/20
*/

#include <stdio.h>

int main(){
    int prev, cur;

    prev='.';
    while((cur = getchar()) != '*'){
        
        //duplicate whitespace
        if(
            ((prev == ' ' || prev == '\t') 
            && (cur == ' ' || cur == '\t'))
        )
            ; //do nothing
        
        //tab->space
        else if(cur == '\t')
            putchar(' ');
            
        else
            putchar(cur);
           
        prev = cur;
    }
    putchar('\n');
    return 0;
}