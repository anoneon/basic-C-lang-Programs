// 1 + (1 + 2) + (1 + 2 + 3) + ... + (1 + 2 + 3 + .... + n)

#include<stdio.h>
#include<conio.h>

int main()
{

    int n,i,j,sum,g_sum=0;

    printf("enter n : ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        sum=0;

        for(j=1;j<=i;j++)
        {
            sum=sum+j;
        }

        g_sum=g_sum+sum;
    }

    printf("summation = %d",g_sum);

    getch();
    return 0;
}