#include<stdio.h>
int main()
{
    int n,i=1,sum=0;
    printf("Enter a number :");
    scanf("%d",&n);
    do
    {
        sum=sum+i;
        i=i+2;
    }while(i<=n);
    printf("The sum of odd number is %d",sum);
    return 0;
}
