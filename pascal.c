// using array
#include<stdio.h>
#include<conio.h>
void main()
{
    int n,c[10][10];

    printf("Enter n : ");
    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            printf(" ");
        }

        for(int k=0;k<=i;k++)
        {
            if(k==0||i==k)
            {
                c[i][k]=1;
                printf(" %d",c[i][k]);
            }
            else
            {
                c[i][k]=c[i-1][k-1]+c[i-1][k];
                printf(" %d",c[i][k]);
            }
        }
        printf("\n");
    }


    getch();
}