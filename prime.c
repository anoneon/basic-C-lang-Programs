#include<stdio.h>
#include<conio.h>
void main()
{
    int n,ct,hw=0;

    printf("Enter n : ");
    scanf("%d",&n);

    for(int i=2;i<=n;i++)
    {
        ct=0;
        for(int j=1;j<=i/2;j++)
        {
            if(i%j==0)
            {
                ct++;
            }
        }

        if(ct<2)
        {
            printf("%d ",i);
            hw++;

        }
    }

    printf("\ntotal = %d",hw);
    getch();
}