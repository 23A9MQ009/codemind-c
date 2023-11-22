#include<stdio.h>
int main()
{
    int N,R,rev=0,t;
    scanf("%d",&N);
    t=N;
    while(N>0)
    {
        R=N%10;
        rev=rev*10+R;
        N=N/10;
    }
    if(rev==t)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    
}