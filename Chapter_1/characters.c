#include <stdio.h>
int main(){

    int x;
    
    printf("EOF: %d", EOF);
    while((x=getchar())!= EOF){
        
        putchar(x);
    }


    

    

    return 0;
}
