#include<stdio.h>
int main()
{
    int X,A,B;
    scanf("%d%d%d",&X,&A,&B);
    if(A+2*B>=X)
    {
        printf("Qualify");
    }
    else
    {
        printf("Not Qualify");
    }
}