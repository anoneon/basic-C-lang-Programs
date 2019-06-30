#include<stdio.h>
#include<conio.h>
void main()
{
    int n,r,rev=0;

    printf("enter n : ");
    scanf("%d",&n);
    
    while(n>0)
    {
        r=n%10;
        rev=rev*10+r;
        n/=10;
    }

    printf("reverse = %d",rev);
    getch();
}