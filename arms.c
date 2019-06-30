// armstrong number all cases

#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
{

    int n,rem,sum,dgt,temp;

    printf("Enter n : ");
    scanf("%d",&n);

    for(int i=1;i<=n;i++)
    {
        if(i<10)
            printf("%d ",i);
        else
        {
            
            temp=i;
            sum=0,dgt=0;
            while(temp>0)
            {
                ++dgt;
                temp=temp/10;
            }

            temp=i;
            while(temp>0)
            {
                rem=temp%10;
                sum=sum+pow(rem,dgt);
                temp=temp/10;
            }
            
            if(sum==i)
            printf("%d ",i);
        }
    }        


    

    getch();
}