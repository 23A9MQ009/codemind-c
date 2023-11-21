#include<stdio.h>
int main()
{
    int P,C,B,M,CS;
    scanf("%d%d%d%d%d",&P,&C,&B,&M,&CS);
    float per=(P+C+B+M+CS)*0.2;
    if(per>=90)
    {
        printf("Grade A");
    }
    else if(per>=80)
    {
        printf("Grade B");
    }
    else if(per>=70)
    {
        printf("Grade C");
    }
    else if(per>=60)
    {
        printf("Grade D");
    }
    else if(per>=40)
    {
        printf("Grade E");
    }
    else 
    {
        printf("Grade F");
    }
}