/*
*   Zack Orlaski
*   K&R Exampj;m: Word Counter
*   8/29/20
*/

#include <stdio.h>

int main(){
    int c, i, nwhite, nother;
    int ndigit[10];
    
    nwhite=nother=0;
    
    for (i = 0; i < 10; ++i)
        ndigit[i] = 0;

    while((c=getchar()) != EOF)
        if (c >= '0' && c <= '9')
            ++ndigit[c-'0'];
        else if (c == ' ' || c == '\n'||c=='\t')
            ++nwhite;
        else
            ++nother;

    printf("digit counter\n");
    for(i = 0; i<10; i++){
        printf("%d:\t%3d\n",i,ndigit[i]);

    }
    printf("whitespace chars:\t%3d\n", nwhite);
    printf("misc. chars:\t%3d\n",nother);

    return 0;
}
