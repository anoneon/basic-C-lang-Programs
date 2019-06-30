#include<stdio.h>
#include<conio.h>
void main()
{
    int n,sum=0,i=1;

    printf("Enter the range : ");
    scanf("%d",&n);

    while(i<=n)
    {
        if(i%7==0)
        {
            printf("%d ",i);
            sum=sum+i;
        }
        i++;
    }

    printf("sum = %d",sum);
    getch();
}