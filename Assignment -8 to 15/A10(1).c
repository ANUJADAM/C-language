#include<stdio.h>
float Area(float);
int main()
{
    int x;
    float a;
    printf("Enter the radius of circle :");
    scanf("%d",&x);
    a=Area(x);
    printf("The area of circle is %f",a);
    return 0;

}
float Area(float r)
{
    float A;
    A=(3.14*r*r);
    return A;
}
