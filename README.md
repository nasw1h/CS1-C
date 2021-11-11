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
Step  1: Start
Step  2: Declare variables count, a,b , sum
Step  3: Initialize the variables, a=0, b=1, and count =2
Step  4: Enter the number of terms of Fibonacci series to be printed
Step  5: Print First two terms of series
Step  6: Use loop for the the steps 7 to 11 until count < n
Step  7: sum=a+b
Step  8: increase value of count each time by 1 
Step  9: print the value of sum
Step 10: a=b
Step 11: b=sum
Step 12: End
```
### Code:
```c
#include <stdio.h>

int main()
{
    int a = 0, b = 1, sum, n, count = 2;

    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("First %d FIBONACCI numbers are: ", n);
    printf("%d\t", a);
    printf("%d\t", b);
    while (count < n)
    {
        sum = a + b;
        count++;
        printf("%d\t", sum);
        a = b;
        b = sum;
    }
}
```
### Output:
```yml
Enter the value of n: 10
First 10 FIBONACCI numbers are: 0       1       1       2       3       5       8       13      21      34
```

## 3. C program to print pyramid pattern with *

### Algorithm:
```yml

```
### Code:
```c
#include <stdio.h>
int main()
{
    int i, j, n, k = 0;

    printf("Enter a number to define the rows: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        for (j = 0; j <= n - i; j++)
        {
            printf(" ");
        }
        for (k = 1; k <= i; k++)
        {
            printf(" *");
        }
        printf("\n");
    }
}
```
### Output:
```yml
Enter a number to define the rows: 5
      *
     * *
    * * *
   * * * *
  * * * * *
```

## 4. C program to find number of words in a sentence

### Algorithm:
```yml

```
### Code:
```c
#include <stdio.h>
#include <string.h>

int main()
{
    char str[200];
    int i, count = 1;

    printf("Please enter the string :  ");
    gets(str);

    if (str[0] == ' ' || str[0] == '\t')
        count--;

    for (i = 0; str[i] != '\0'; i++)
        if ((str[i] == ' ' || str[i] == '\t') && (str[i + 1] != ' ' && str[i + 1] != '\t') && str[i + 1] != '\0')
            count++;

    printf("The total number of words in this string \"%s\"  = %d\n", str, count);

    return 0;
}
```
### Output:
```yml
Please enter the string :  Hi I am user  
The total number of words in this string "Hi I am user"  = 4
```

## 5. C program to check whether a number is Prime or not

### Algorithm:
```yml

```
### Code:
```c
#include <stdio.h>
int main()
{
    int n, i, f = 0;
    printf("Enter the number: ");
    scanf("%d", &n);
    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            f = 1;
            break;
        }
    }
    if (f == 0)
        printf("The given number is prime");
    else
        printf("The given number is not prime");
}
```
### Output:
```yml
Enter the number: 5
The given number is prime
```
