#include <stdio.h>
#include <stdlib.h>

int main()
{


    int marks[5];
    int sum=0;
    float average;
    int highest;
    printf("input the marks of five subject\n");

   for(int i=0;i < 5;i++){
    scanf("%d", &marks[i]);
    sum=sum + marks[i];
   }
   highest=marks[0];
   for(int i=1;i < 5;i++){
    if(marks[i] > highest){
        highest=marks[i];
    }{
        printf("highest =%d",highest);
    }
   }

   average = sum/5.0;

   printf("sum =%d\n",sum);
   printf("average= %.2f",average);
    return 0;
}
