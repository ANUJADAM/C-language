#include<stdio.h>
int main(){
int n,a,b,c,sum;
printf("Enter a three digit number :");
scanf("%d",&n);
a=n/100;
b=((n%100)/10);
c=n%10;
sum=a+b+c;
printf("The sum of digits of given number is %d",sum);
return 0;
}
