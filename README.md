# C Program

## 1. C program to find the sum of a given number and its reverse.

### Algorithm:
```
Step  1: Start
Step  2: Read number num
Step  3: Set sum=0
Step  4: Repeat step 5 to 9 while num
Step  5: Set d=num mod 10
Step  6: Set sum=sum+d
Step  7: Set rev[i]=d
Step  8: Set num=num/10
Step  9: Set i++
Step 10: Print sum
Step 11: Print rev
Step 12: Stop
```
Code:
```
#include<stdio.h>

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
```
Output:
```
Enter the number: 987
Sumof digits = 24
Reverse of the number = 789
```
