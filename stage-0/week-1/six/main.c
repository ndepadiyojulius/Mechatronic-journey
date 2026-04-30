#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age;

    printf("Enter your age\n");
    scanf("%d",&age);

    if(age >= 18){
        printf("you are eligible to vote\n");
    }
    else if(age >= 120){
        printf("invalid\n");
    }
    else if(age <= 0){
        printf("invalid\n");
    }
    else{
        printf("you are not eligible\n");
    }
    return 0;
}
