#include <stdio.h>

int main( )
{
   int num,sum=0,rev[10], d, i, j;
   
   printf("Enter the number: ");
   scanf("%d",&num);

   while(num)
   {
      d=num%10;
      sum=sum+d;
      rev[i]=d;
      num=num/10;
      i++;
   }

   printf("Sumof digits = %d",sum);
   printf("\nReverse of the number = ");
   for (j=0;j<i;j++)
   {
      printf("%d",rev[j]);
   }
}
