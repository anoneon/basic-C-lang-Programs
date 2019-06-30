//odd numbers upto n

#include<stdio.h>
#include<conio.h>
int main()
{
    int i,n;

    printf("Enter value of n : ");
    scanf("%d",&n);
    i=1;

    while(i<=n)
    {
        if(i%2!=0)
        {
            printf("%d ",i);

        }
        i++;
    }
    getch();
    return 0;
}