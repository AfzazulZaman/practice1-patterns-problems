#include<stdio.h>
int main(){
       int n=10,s,k;
       s=n-1;
       k=0;
       for (int i = 1; i <=n; i++)
       {
          for (int t = 0; t <s; t++)
          {
             printf(" ");
          }
          
          for (int t = 0; t <k; t++)
          {
             printf("*");
          }
          s++;
          k+=1;
        printf("\n");
       }
       int a=10,b,c;
       b=17;
       c=a-1;
        for (int i = 1; i <=a; i++)
        {
          
           for (int j = 0; j <b; j++)
           {
             printf(" ");
           }

           for (int j = 0; j <c; j++)
           {
             printf("*");
           }
           b-=2;
           c--;
           printf("\n");
        }
        
    return 0;
}
