#include <stdio.h>

int main(){
    int fahr, cels; 
    int lower, upper, step;
    
    upper = 300;
    lower = 0;
    step = 20;

    fahr = lower;

    while (fahr <= upper){
        cels = 5 * (fahr-32) / 9;
        printf("%3d\t%3d\n", fahr, cels);
        fahr += step;
    }

    return 0;
}