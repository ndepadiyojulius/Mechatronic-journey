#include <stdio.h>
#include <stdlib.h>

struct person {
  double marks;
  int age;
 };

int main()
{
    struct person julius;
    struct person nde;
    struct person padiyo;

    julius.age;
    julius.marks;
    nde.age;
    nde.marks;
    padiyo.age;
    padiyo.marks;

    printf("Enter age and marks for julius\n");
    scanf("%d",&julius.age);
    scanf("%lf",&julius.marks);
    printf("\nage= %d",julius.age);
    printf("\nmarks= %.2lf",julius.marks);


    printf("Enter age and marks for nde\n");
    scanf("%d",&nde.age);
    scanf("%lf",&nde.marks);
    printf("age= %d",nde.age);
    printf("\nmarks= %.2lf",nde.marks);

    printf("Enter age and marks for padiyo\n");
    scanf("%d",&padiyo.age);
    scanf("%lf",&padiyo.marks);
    printf("age= %d",padiyo.age);
    printf("\nmarks= %.2lf",padiyo.marks);
    return 0;

}
