#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;
    printf("Enter a number btw 1 and 7\n");
    scanf("%d",&number);

    switch(number){
      case 1:
     printf("sunday");
     break;

      case 2:
     printf("monday");
     break;

      case 3:
     printf("wednesday");
     break;

      case 4:
     printf("thursday");
     break;

      case 5:
     printf("friday");
     break;

      case 6:
     printf("satuday");
     break;

     default:
     printf("invalid");
    }
    return 0;
}
