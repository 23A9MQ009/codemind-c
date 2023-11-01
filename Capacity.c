#include<stdio.h>
int main()
{
    int T,S,B,Capacity;
    scanf("%d%d%d",&T,&S,&B);
    Capacity=(T*S*B);
    printf("%d KB",Capacity);
}