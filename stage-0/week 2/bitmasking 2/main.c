#include <stdio.h>
#include <stdlib.h>

int main()
{
    int reg=0;
    int pin=3;

    reg |=(1<<pin);
    printf("SET: %d\n",reg);

    reg &=~(1<<pin);
    printf("CLEAR: %d\n",reg);

    reg ^=(1<<pin);
    printf("TOGGLE: %d\n",reg);

   // int reg = 10101010;
    //int pin = 3;

    if(reg & (1 << pin)){
        printf("pin %d is ON\n",pin);
    } else{
        printf("pin %d is OFF\n",pin);
    }
    /*

    unsigned char gpio = 0;

    gpio |= (1 << 0);
    gpio |= (1 << 2);
    gpio |= (1 << 5);

    printf("Gpio state: %d",gpio);

    for (int i = 0;i < 8;i++){

        printf("pin %d: %s\n",i,(gpio & (1 << i))? "ON" : "OFF");
    }
    */
    return 0;

}
