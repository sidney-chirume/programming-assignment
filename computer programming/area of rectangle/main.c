#include <stdio.h>
#include <stdlib.h>

int main()
{
    float length,width,perimeter,area;
    printf("enter the length of the rectangle\n");
    scanf("%f",&length);
    printf("enter the width of the rectangle\n");
    scanf("%f",&width);
    perimeter=2*length+2*width;
    area=length*width;
    printf("perimeter of the rectangle is %f\n",perimeter);
    printf("area of the rectangle is %f\n",area);
    return 0;

}
