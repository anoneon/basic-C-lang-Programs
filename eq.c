// w= 1 + sin(x) + |Ax +By| * e ^ |x-|A||

#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
    float w,x,y,a,b;

    printf("Enter value of x : ");
    scanf("%f",&x);
    printf("\nEnter value of y : ");
    scanf("%f",&y);
    printf("\nEnter value of A : ");
    scanf("%f",&a);
    printf("\nEnter value of B : ");
    scanf("%f",&b);

    w=1+sin(x)+(fabs(((a*x)+(b*y)))*exp(fabs(x-fabs(a))));

    printf("\n value of W = %f",w);
}