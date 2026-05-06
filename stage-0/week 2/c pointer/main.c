#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age;
    printf("Enter your age\n");
    scanf("%d",&age);
    int* ptr =&age;
    printf("%p",ptr);
    printf("\nvalue %d",*ptr);
    return 0;
}
