#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    int bin,dec,r,i,tmp;

    dec=0;
    i=0;

    printf("enter binary number : ");
    scanf("%d",&bin);

    tmp=bin;

    while(bin>0)
    {
        r=bin%10;
        dec=dec+(r*pow(2,i));
        bin/=10;
        i++;
    }

    printf("the decimal value of binary num %d is %d",tmp,dec);
    getch();
    return 0;
}