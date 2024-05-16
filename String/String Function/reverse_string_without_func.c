#include<stdio.h>
#include<string.h>

void reversed_string(char *str) {
    int i, len = strlen(str);
    for (i = 0; i < len/2; i++) {
        char temp = str[i];
        str[i] = str[len-i-1];
        str[len-i-1] = temp;
    }
}

int main()
{
    char str1[100];
    printf("Enter any word:");
    gets(str1);
    reversed_string(str1);
    printf("the reversed string is:%s\n", str1);
    return 0;
}