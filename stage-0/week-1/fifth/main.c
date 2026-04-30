#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int age=32;
    double height=6.3;
    bool value=(9==6);
    bool result=(age>=18)&&(height>6.0);

    printf("%d\n",result);
    printf("%d",value);
    return 0;
}
