// BASIC TRIANGLE PATTERNS
#include<stdio.h>
#include<conio.h>

int main()
{
    /*
     *
     **
     ***
     ****
     *****
     */
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<(i+1);j++)
        {
            printf(" * ");
        }

        printf("\n");

    }

    printf("\n");
    /*
    *****
    ****
    ***
    **
    *
    */

    for(int i=0;i<5;i++)
    {
        for(int j=0;j<(5-i);j++)
        {
            printf(" * ");
        }

        printf("\n");

    }

    printf("\n");

    /*
    *
    **
    ***
    ****
    *****
    ******
    *****
    ****
    ***
    **
    *
    */

    for(int i=0;i<12;i++)
    {
        if(i<6)
        {
            for(int j=0;j<(i+1);j++)
            {
                printf(" * ");
            }
             printf("\n");
        }

        else
        {
            int l=i-6;
            for(int k=0;k<(5-l);k++)
            {
                printf(" * ");
            }
            printf("\n");
        }

       
    }

    /*
         *
        * *
       * * *
      * * * *
    */

   for(int i=0;i<5;i++)
   {
       for(int j=0;j<(5-i);j++)
       {
           printf(" ");
       }
       for(int k=0;k<(i+1);k++)
       {
           printf("* ");

       }
       printf("\n");
   } 

   /*
        *
       **
      ***
     ****
    *****
    */

   for(int i=0;i<5;i++)
   {
       for(int j=0;j<(5-i);j++)
       {
           printf(" ");
       }
       for(int k=0;k<(i+1);k++)
       {
           printf("*");

       }
       printf("\n");
   }

   printf("\n");

   /*
    ****
     ***
      **
       *
    */

   for(int i=0;i<5;i++)
   {
       for(int j=0;j<(i+1);j++)
       {
           printf(" ");
       }
       for(int k=0;k<(5-i);k++)
       {
           printf("*");

       }
       printf("\n");
   }
    printf("\n");
   /*
   * * * * *
    * * * *
     * * *
      * *
       *
    */
   for(int i=0;i<5;i++)
   {
       for(int j=0;j<(i+1);j++)
       {
           printf(" ");
       }
       for(int k=0;k<(5-i);k++)
       {
           printf("* ");

       }
       printf("\n");
   }

    getch();
    return 0;
}