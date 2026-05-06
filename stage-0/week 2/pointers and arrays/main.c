#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numbers[10]={1,14,51,54,54,21,36,24,25,54};

    for(int i=0;i < 10;++i){
    printf("%d = %p\n",numbers[i], &numbers[i]);

    }
    return 0;
}
