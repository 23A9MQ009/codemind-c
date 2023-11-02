#include<stdio.h>
#include<math.h>
int main()
{
    float p,i,r,t;
    scanf("%f%f%f",&p,&r,&t);
    i=(p*pow((1+r/100),t)-p);
    printf("%.2f",i);
}