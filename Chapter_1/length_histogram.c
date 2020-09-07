/*
*   Zack Orlaski
*   K&R Exercise 1-13: build a histogram of the word lengths of input
*   8/30/HIST_SIZE
*/

#include <stdio.h>
#define IN 1
#define OUT 0
#define HIST_SIZE 15
#define DELIM '*'
int main(){
    int c, count, state;
    int length[HIST_SIZE];
    


    state = OUT;
    count = 0;

    //Init ary
    for(int i = 0; i < HIST_SIZE; i++)
        length[i] = 0;

    while((c = getchar()) != DELIM){
        //Leaving word
        if(state==IN)
            if (c == ' ' || c == '\t' || c == '\n' ||  c == '.' ||  c == ',' || c == '!' ||  c == '?' || c == '\'' || c == '\"'){
                state = OUT;
                ++length[count - 1];
                count = 0;
       //         printf("Left Word\n");

            }   
        //still in word
            else{
                ++count;
        //        printf("%c: still in word\n", c);
            } 
        //entering word
        else if (!(c == ' ' || c == '\t' || c == '\n' ||  c == '.' ||  c == ',' || c == '!' ||  c == '?' || c == '\'' || c == '\"')){
            state = IN;
            ++count;
          //  printf("%c: entered word\n", c);
        }
            
    
    }
    if(state == IN)
        ++length[count - 1];

    for(int i = 0; i < HIST_SIZE; i++){
        printf("%3d:",i+1);
        for(int j = 0; j < length[i]; j++)    
            printf("[ ]");
        printf("\n");
        
    }     
    return 0;
}