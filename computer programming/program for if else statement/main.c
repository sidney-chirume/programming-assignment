#include <stdio.h>
#include <stdlib.h>

int main()
{
 char name;
 float programming,math,os,average;
 char remark[10];
 printf("enter name\n");
 scanf("%c",&name);
 printf("enter programming marks\n");
 scanf("%f",&programming);
 printf("enter math marks\n");
 scanf("%f",&math);
 printf("enter os marks\n");
 scanf("%f",&os);
 average=(programming+math+os)/3;
 if(average>=80){
    printf("name:%c\n",name);
    printf("average:%f\n",average);
    printf("distinction\n",remark);
 }
 else if(average>=60){
    printf("name:%c\n",name);
    printf("average:%f\n",average);
    printf("credit\n",remark);
 }
 else if(average>=40){
     printf("name:%c\n",name);
    printf("average:%f\n",average);
    printf("pass\n",remark);
 }
  else if(average <=39){
     printf("name:%c\n",name);
    printf("average:%f\n",average);
    printf("fail\n",remark);
 }
 return 0;
}
