#include <stdio.h>
#include <stdlib.h>

int main()
{ char name[50];
  float english,science,maths,average;/*declaration of variables*/
  printf("enter name\n");
  scanf("%s",&name);
  printf("enter english\n");
  scanf("%f",&english);
  printf("enter science\n");
  scanf("%f",&science);
  printf("enter maths\n");
  scanf("%f",&maths);
  average=(english + science + maths)/3;
  printf("name:%s\n",name);
  printf("average marks:%f\n",average);
  return 0;
}
