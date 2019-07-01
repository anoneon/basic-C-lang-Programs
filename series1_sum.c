// sum = x-(x^3/3!) + (x^5/5!) - .... (x^n/n!)

#include<stdio.h>
#include<conio.h>
#include<math.h>
int fact(int tmp)
{
    if(tmp==0)
        return(1);
    else
        return(tmp*fact(tmp-1));
        
}
void main()
{
    int n,x,m;
    float sum;

    m=1;
    sum=0;

    printf("enter n : ");
    scanf("%d",&n);

    printf("enter x : ");
    scanf("%d",&x);

    
    for(int i=1;i<=n;i+=2)
    {
        sum=sum+(m*(pow(x,i)/fact(i)));
        m=m*-1;
    }

    printf("\n Sum = %0.2f",sum);
    getch();
}