#include<stdio.h>
int main()
{
    int N,x;
    printf("Enter the number:");
    scanf("%d",&N);
    x=N%10;
    printf(" Last digit of the number is %d",x);
    return 0;
}
