#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age;
    double num;
    char alphabet;
    printf("Enter your age and values: \n");
    scanf("%d %lf %c",&age,&num,&alphabet);

    printf("\ni am %d years old",age);
    printf("\nnum=%lf",num);
    printf("\nalphabet=%c",alphabet);
    return 0;
}
