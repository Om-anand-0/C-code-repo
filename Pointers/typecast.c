#include<stdio.h>

int main()
{
    int num =10;
    float fnum = 3.14;
    char letter = 'a';
    void *ptr;
    ptr = &num;
    printf("%d\n",*(int*)ptr);
    ptr = &fnum;
    printf("%.2f\n", *(float*)ptr);
    ptr = &letter;
    printf("%c\n", *(char*)ptr);
    return 0;
}