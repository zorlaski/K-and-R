#include <stdio.h>
int main(){

    int input, num_lines,
    //Exercise 1.8
    num_blanks, num_tabs;


    num_lines = num_blanks = num_tabs = 0;
    
    
    while((input=getchar())!= '*'){
        if(input=='\n')
            ++num_lines;
        if(input==' ')
            ++num_blanks;
        if(input=='\t')
            ++num_tabs;   
    }

    printf("LINES:\t%2d\n",num_lines);
    printf("BLANKS:\t%2d\n",num_blanks);
    printf("TABS:\t%2d\n",num_tabs);
    return 0;
}