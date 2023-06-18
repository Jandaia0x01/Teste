#include <stdio.h>


int main (){

    int *p;
    double numDouble = 5.55;

    p = &numDouble;
    *p = 20;

    printf("Novo numero: %lf\n", numDouble);



return 0;
}