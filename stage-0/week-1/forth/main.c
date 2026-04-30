#include <stdio.h>
#include <stdlib.h>

int main()
{
    int w=20+5-10/2*4;
    int x=12;
    double y=2.34;
    double z=13.00;
    int result=x+20;
    double answe=x/y;
    double resul=y+2.36;
    double answer=y+x;
    double reponds=x-y;
    double responds=x*y;

    printf("w=%d\n",w);
    printf("answer=%.2lf\n",answe);
    printf("responds=%.2lf\n",responds);
    printf("respond=%.2lf\n",reponds);
    printf("answer=%.2lf\n",answer);
    printf("resui=%.2lf\n",resul);
    printf("result=%d\n",result);
    printf("x plus=%d\n",++x);
    printf("x minus=%d\n",--x);
    return 0;
}
