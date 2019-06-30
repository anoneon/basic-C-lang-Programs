#include<stdio.h>
#include<conio.h>
void main()
{
    long int n;
    int rem,sum=0;

    printf("Enter n : ");
    scanf("%d",&n);

    while(n>0)
    {
        rem=n%10;
        sum=sum+rem;
        n=n/10;
        
    }

    printf("\n sum of digit is : %d",sum);


    getch();
}