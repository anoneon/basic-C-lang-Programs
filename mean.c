// mean of student marks

#include<stdio.h>
#include<conio.h>

int main()
{
    int arr[10],n,i,sum,mn;

    sum=0;

    printf("Enter no. of students : ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("Enter percentage of %d student : ",i+1);
        scanf("%d",&arr[i]);
        sum=sum+arr[i];

    }

    mn=sum/n;

    printf("\nmean = %d",mn);
    
    getch();
    return 0;
}