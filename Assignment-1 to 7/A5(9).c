#include<stdio.h>
int main()
{
    int n,i=1,cube;
    printf("Enter the number :");
    scanf("%d",&n);
    for(i;i<=n;i++)
    {
        cube=i*i*i;
        printf("%d ",cube);
    }
    return 0;
}
