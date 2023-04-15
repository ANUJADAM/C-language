#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    for(i=n;i>=1;i=i-2)
    {
        printf("%d ",i);
    }
    return 0;
}
