#include<stdio.h>
int main()
{
    char a[]="PRATEEK";
    char b='e';
    int i=0,count=0;

    while(a[i]!='\0')
    {
        
        if(a[i]>='A' && a[i]<='Z')
        {
            a[i]=a[i]+32;
        }
        i++;
    }
    printf("%s",a);
    return 0;
}