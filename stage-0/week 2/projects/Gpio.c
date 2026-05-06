#include <stdio.h>

unsigned char GPIO = 0x00;

void printBinary(unsigned char value)
{
    int i;

    printf("GPIO State: ");

    for(i = 7; i >= 0; i--)
    {
        printf("%d", (value >> i) & 1);
    }

    printf("\n");
}

void setBit(int bit)
{
    GPIO |= (1 << bit);
}

void clearBit(int bit)
{
    GPIO &= ~(1 << bit);
}

void toggleBit(int bit)
{
    GPIO ^= (1 << bit);
}

int main()
{
    int choice;
    int bit;

    while(1)
    {
        printf("\n===== GPIO BITMASK SIMULATOR =====\n");
        printf("1. Set Bit\n");
        printf("2. Clear Bit\n");
        printf("3. Toggle Bit\n");
        printf("4. Display GPIO\n");
        printf("5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if(choice == 5)
        {
            break;
        }

        switch(choice)
        {
            case 1:
                printf("Enter bit number (0-7): ");
                scanf("%d", &bit);

                if(bit >= 0 && bit <= 7)
                {
                    setBit(bit);
                }
                else
                {
                    printf("Invalid bit!\n");
                }
                break;

            case 2:
                printf("Enter bit number (0-7): ");
                scanf("%d", &bit);

                if(bit >= 0 && bit <= 7)
                {
                    clearBit(bit);
                }
                else
                {
                    printf("Invalid bit!\n");
                }
                break;

            case 3:
                printf("Enter bit number (0-7): ");
                scanf("%d", &bit);

                if(bit >= 0 && bit <= 7)
                {
                    toggleBit(bit);
                }
                else
                {
                    printf("Invalid bit!\n");
                }
                break;

            case 4:
                printBinary(GPIO);
                break;

            default:
                printf("Invalid choice!\n");
        }
    }

    return 0;
}