#include<stdio.h>
int main()
{
    int n,i=1,x;
    printf("Enter the number :");
    scanf("%d",&n);
    for(i;i<=10;i++)
    {
       x=n*i;
       printf("%d ",x);
    }
    return 0;
}
