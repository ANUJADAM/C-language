#include<stdio.h>
int main(){
int x,y;
printf("enter the number or digit :");
scanf("%d %d",&x,&y);
x=x*10;
x=x+y;
printf("The number is %d",x);
return 0;
}
