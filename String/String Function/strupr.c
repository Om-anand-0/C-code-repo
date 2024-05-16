#include<stdio.h>
#include<string.h>

int main()
{
    char str1[20];
    printf("Enter any word:");
    gets(str1);
    printf("Upper Cased string is: %s \n", strupr(str1));
    return 0;
}