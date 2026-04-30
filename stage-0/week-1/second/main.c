#include <stdio.h>
#include <stdlib.h>
/*
int     %d for printing
double   %lf for printing
float    %f for printing
char      %c printx
*/
int main()
{
    int age=30;
    double num1=12.32;
    float num2=13.34;
    char character='z';
    printf("age=%d",age);
    printf("\nint size=%zu",sizeof(age));
    printf("\nnum1=%.3f",num1);
    printf("\ndouble size=%zu",sizeof(num1));
    printf("\nnum2=%.2f",num2);
    printf("\nfloat size=%zu",sizeof(num2));
    printf("\ncharacter=%c",character);
    printf("\nchar size=%zu",sizeof(character));

    return 0;
}
