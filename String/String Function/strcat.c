#include<stdio.h>
#include<string.h>

int main()
{
    char str1[100] = "This is";
    char str2[100] = "Programiz.com";
    strncat(str2,str1,3);
    puts(str2);
    puts(str1);
    return 0;
}