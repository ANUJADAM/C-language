#include<stdio.h>
#include<string.h>
int main()
{
    char ip[]="23.134.12.13";

    char *a=strtok(ip,".");
    while(a != NULL)
    {
        int x =atoi(a);
        if( (x>=0) && (x<=255) )
        printf("%d ",x);
        a= strtok(NULL,".");
    }
    return 0;
}