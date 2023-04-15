#include<stdio.h>
int main()
{
    int n,i=0,sum=0;
    printf("Enter a number :");
    scanf("%d",&n);
    while(i<=n)
    {
        sum=sum+i;
        i=i+2;
    }
    printf("sum of even number is %d",sum);
    return 0;
}
