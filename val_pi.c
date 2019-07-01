#include<stdio.h>
#include<conio.h>

int main()
{
    int n,i,m;
    float v_pi,sum;

    m=1;
    sum=0;

    printf("enter n : ");
    scanf("%d",&n);

    for(i=1;i<=n;i+=2)
    {
        sum=sum+(m*(1/(float)i));
        m=m*-1;
    }

    v_pi=4*sum;

    printf("value of pi = %.2f",v_pi);
    
    getch();
    return 0;

}