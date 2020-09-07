#include <stdio.h>

int main(){

    /* Simple while loop way*/
    // long nc;

    // nc = 0;
    
    // while (getchar() != '*') ++nc;
    
    // printf("%ld\n",nc);

    /*Hacky K&R way*/
    
    double nc,lc;

    for (nc = 0; getchar() != '*'; ++nc)
        ;
    printf("%.2f\n",nc);
}