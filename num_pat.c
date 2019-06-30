//number patterns dsign

#include<stdio.h>
#include<conio.h>
int main()
{
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<4-i;j++)
        {
            printf(" ");
        }

        int m=i+1;

        for(int k=0;k<i+1;k++)
        {
            printf("%d",m);
            m++;
        }

        if(i>0)
        {
            m=i*2;

            for(int l=0;l<i;l++)
            {
                printf("%d",m);
                m--;
            }
        }


        printf("\n");
    }
    getch();
    return 0;
}