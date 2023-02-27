#include <stdio.h>
#include <stdlib.h>

int main()
{
    char colour;
    printf ("colour on the traffic light\n");
    scanf("%c",&colour);
    if(colour=='r'){
        printf("stop\n");
    }
    else if(colour=='y'){
        printf("get ready\n");
    }
    else if(colour=='g'){
        printf("move\n");
    }
    return 0;
}
