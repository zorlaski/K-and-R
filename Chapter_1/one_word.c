/*
*   Zack Orlaski
*   K&R Exercise 1-12: write a program that prints its input one word per line
*   8/29/20
*/

#include <stdio.h>
int main(){
   
   int c;

    while ((c = getchar()) != '*'){ //text uses EOF but since this is std. keyboard input I need a rarely
                                    //used character in lieu of EOF.
          
        if (c == ' ' || c == '\t') 
                putchar('\n');

        else putchar(c);


    }   

    return 0;
}