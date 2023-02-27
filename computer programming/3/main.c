#include <stdio.h>
#include <stdlib.h>

int main()
{
    float length,width,perimeter,area; /*declaration of length and width*/
    printf("enter width of the rectangle\n");
    scanf("%f",&width);
    printf("enter length of the rectangle\n");
    scanf("%f",&length);
    perimeter=2*length+2*width;
    area=length*width;
    printf("area is %f",area);
    printf("perimeter is %f",perimeter);
    return 0;

}
