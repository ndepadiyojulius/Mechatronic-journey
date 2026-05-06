#include <stdio.h>
#include <stdlib.h>

enum size {
  small=41,
  medium=54,
  large=25,
  extralarge=47
};

int main()
{
    enum size shoesize1=small;
    enum size shoesize2=medium;
    enum size shoesize3=large;
    enum size shoesize4=extralarge;

    printf("%d",shoesize1);
    printf("\n%d",shoesize2);
    printf("\n%d",shoesize3);
    printf("\n%d",shoesize4);
    return 0;
}
