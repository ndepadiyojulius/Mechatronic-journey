#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE* fptr;

    fptr = fopen("julius.txt","r");
    char content[1000];

    if(fptr != NULL){
        while(fgets(content,1000,fptr)){
            printf("%s",content);
        }

    }else{

       printf("file open unsuccessful");
    }
    fclose(fptr);
    return 0;
}
