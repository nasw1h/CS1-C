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