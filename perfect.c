#include<stdio.h>
#include<conio.h>
 void main()
 {
     int i,n,temp,sum=0,r;

    printf("enter n : ");
    scanf("%d",&n);

    temp=n;
    i=1;
    while(i<=temp/2)
    {
        if(temp%i==0)
        {
            sum=sum+i;
        }
        i++;
    }

    if(sum==n)
    printf("yes");
     getch();
 }