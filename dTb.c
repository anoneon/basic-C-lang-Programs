// deciaml to binary

#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    int bin,dec,r[20],i,tmp,j;

    bin=0;
    i=0;

    printf("enter decimal number : ");
    scanf("%d",&dec);

    tmp=dec;

    while(dec>0)
    {
        r[i]=dec%2;
        dec/=2;
        i++;
    }

    printf("the binary value of decimal num %d is ",tmp);
    for(j=i-1;j>=0;j--)
    {
        printf("%d",r[j]);
    }
    getch();
    return 0;
}