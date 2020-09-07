#include <stdio.h>

int main(){
    float fahr, cels; 
    int lower, upper, step;
    
    upper = 300;
    lower = 0;
    step = 20;

    fahr = lower;
    
    //Exercise 1-3: Print a heading
    printf("F\tC\n");

    printf("--------------------\n");

    while (fahr <= upper){
        cels = 5.0/9.0 * (fahr-32.0);
        printf("%3.2f\t%6.2f\n", fahr, cels);
        fahr += step;
    }

     //Exercise 1-4: Print a C to F table
    printf("\nC\tF\n");

    printf("--------------------\n");

    cels = lower;

    while (cels <= upper){
        fahr = (cels * 9.0 / 5.0 ) + 32.0;
        printf("%3.2f\t%6.2f\n", cels, fahr);
        cels += step;
    }

    return 0;
}