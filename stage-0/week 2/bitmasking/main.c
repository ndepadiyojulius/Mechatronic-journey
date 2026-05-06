#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=10;
    int b=12;
    printf("AND=%d\n",a & b);
    printf("OR=%d\n",a | b);
    printf("XOR=%d\n",a ^ b);
    printf("NOT=%d\n",~b);
    printf("LEFT SHIFT=%d\n",a << b);
    printf("RIGHT SHIFT=%d\n",a >> b);
    return 0;
}
