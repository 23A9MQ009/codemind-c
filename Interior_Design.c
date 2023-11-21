#include<stdio.h>
int main()
{
    int X1,Y1,X2,Y2,L,S;
    scanf("%d%d%d%d",&X1,&Y1,&X2,&Y2);
    L=X1+Y1;
    S=X2+Y2;
    if(L<=S)
    {
    printf("%d",L);
    }
    else
    {
        printf("%d",S);
    }
}