#include<stdio.h>
int main()
{
    int n,i=1,squre;
    printf("Enter the number :");
    scanf("%d",&n);
    for(i;i<=n;i++)
    {
        squre=i*i;
        printf("%d ",squre);
    }
    return 0;
}
