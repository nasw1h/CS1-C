# C Program

## 1. C program to find the sum of a given number and its reverse

### Algorithm:
```yml
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
### Code:
```c
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
### Output:
```yml
Enter the number: 987
Sum of digits = 24
Reverse of the number = 789
```

## 2. C program to find first N Fibonacci numbers

### Algorithm:
```yml

```
### Code:
```c

```
### Output:
```yml

```

## 3. C program to print pyramid pattern with *

### Algorithm:
```yml

```
### Code:
```c

```
### Output:
```yml

```

## 4. C program to find number of words in a sentence

### Algorithm:
```yml

```
### Code:
```c

```
### Output:
```yml

```

## 5. C Program to check whether a number is Prime or not

### Algorithm:
```yml

```
### Code:
```c

```
### Output:
```yml

```
