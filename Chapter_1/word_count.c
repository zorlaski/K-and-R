/*
*   Zack Orlaski
*   K&R Example 1.5.4: Word Counter
*   8/29/20
*/

#include <stdio.h>
#define IN 1
#define OUT 0

int main(){
    int c, nl, nw, nc, state;

    state = OUT;

    nl = nw = nc = 0;

    while ((c=getchar()) != '*'){ //text uses EOF but since this is std. keyboard input I need a rarely
                                  //used character in lieu of EOF.
        
        ++nc; //read a new char

        if(c == '\n') //read a new line
            ++nl;  
    
        if(c == ' ' || c == '\n' || c == '\t') //whitespace read
            state = OUT;
        else if (state == OUT){ //re-enter a word
            state = IN;
            ++nw;
        }

    }   

    printf("Lines:\t%2d\nWords:\t%2d\nChars:\t%2d\n",nl,nw,nc);

    return 0;
}