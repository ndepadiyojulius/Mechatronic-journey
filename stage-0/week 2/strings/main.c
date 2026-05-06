#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[20];
    printf("Enter your name\n");
    fgets(str,sizeof(str),stdin);
    printf("%s",str);

    return 0;
}
