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