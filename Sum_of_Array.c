#include<stdio.h>
int main()
{
    int n,i,arr[n];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int sum=0;
    for(i=0;i<n;i++)
    {
     sum=sum+arr[i];
    }
    printf("%d",sum);
}