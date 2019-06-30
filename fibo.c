// fibbonachi series

#include<stdio.h>
#include<conio.h>
void main()
{
    int n,fst=0,snd=1,nxt;

    printf("enter n : ");
    scanf("%d",&n);
    printf("%d %d ",fst,snd);
    nxt=fst+snd;
    while(nxt<n)
    {
        printf("%d ",nxt);
        fst=snd;
        snd=nxt;
        nxt=fst+snd;
    }
    getch();
}