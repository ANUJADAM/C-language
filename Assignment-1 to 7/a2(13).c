#include<stdio.h>
int main()
{
    int n,x,y,z,N;
    printf("Enter a three digit number :");
    scanf("%d",&n);
    x=(n%10)*100;

    y=((n%100)/10)*10;

    z=n/100;
    N=x+y+z;
    printf("%d",N);
    return 0;
}
