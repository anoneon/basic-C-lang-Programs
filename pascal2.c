// pascal triangle using formula (m*(i-j+1))/j

#include<stdio.h>
#include<conio.h>
void main()
{
    int n,c;

    printf("Enter n : ");
    scanf("%d",&n);

    c=1;
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
                c=1;
                printf(" %d",c);
            }
            else
            {
                c=(c*(i-k+1))/k;
                printf(" %d",c);
            }
        }
        printf("\n");
    }


    getch();
}