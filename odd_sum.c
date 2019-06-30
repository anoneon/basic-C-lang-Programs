#include<stdio.h>
#include<conio.h>
void main()
{
    int n,i=1,sum=0;
    
    printf("Enter a range : ");
    scanf("%d",&n);

    while(i<=n)
    {
        if(i%2!=0)
        {
            sum=sum+i;
        }
        i++;
    }

    printf("\nThe sum of odd numbers upto %d is %d",n,sum);

    getch();
}