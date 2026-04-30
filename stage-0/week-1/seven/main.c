#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age;
    printf("Enter your age\n");
    scanf("%d",&age);
    (age >= 18) ?
     printf("you are eligible") :
          printf("useless");
    return 0;
}
