//Dahv Reinhart
//V00735279
//Fibonacci number cruncher. This program accepts an integer from the command line
//and prints all the fibonacci numbers whose term number is less than or equal to
//the supplied value.

#include <studio.h>
int main(input) {
    int count = 2;
    int t1 = 0;
    int t2 = 1;
    int display = 0;
    while (count < input) {
        display = t1 + t2;
        t1 = t2;
        t2 = display;
        count++;
        printf("%d+", display);
        
    }
    return 0;
}