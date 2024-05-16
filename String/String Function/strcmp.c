#include<stdio.h>
#include<string.h>

int main()
{
    char str1[20];
    char str2[20];
    printf("Enter any word:");
    gets(str1);
    printf("Enter any word:");
    gets(str2);
    if (strcmp(str1,str2) == 0)
    {
        printf("Both string are same.");
    }
    else{
        printf("Both string are not same.");
    }
    
    return 0;
}