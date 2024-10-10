#include<stdio.h>
int main(){
      int n=5,s,k;
       s=n-1;
       k=1;
      for (int i = 0; i < n; i++)
      {
         for (int t = 0; t <s; t++)
         {
           printf(" ");
         }

         for (int t = 0; t <k; t++)
         {
           printf("*");
         }
         s--;
         k+=2;
         printf("\n");
      }

       int a=5,b,c;
        b=0;
        c=a*2-1;
       for (int i = 0; i <=a; i++)
       {
         for (int j = 1; j <=b; j++)
         {
          printf(" ");
         }
         for (int j = 1; j <=c; j++)
         {
           printf("*");
         }
          b++;
          c-=2;
         printf("\n");

       }

    return 0;
}

