
#include<stdio.h>
int main(){
    int n;
printf("Enter the number");
scanf("%d",&n);
if(n&1)
    printf("LSB of %d is 1 ",n);
    else
        printf("LSb of %d is 0",n);
    return 0;
}