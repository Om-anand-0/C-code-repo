#include<stdio.h>

int main()
{
    int a;
    float b,c;
    double d;
    char ch, *p;
    a =10; b = 2.5;c = 12.36; d = 12345.66; ch = 'A';
    printf("%d is stored in loaction %u \n", a,&a);
    printf("%.2f is stored in loaction %u \n", b,&b);
    printf("%.2f is stored in loaction %u \n", c,&c);
    printf("%.2lf is stored in loaction %u \n", d,&d);
    printf("%c is stored in loaction %u \n", ch,&ch);
    p = &ch;
    printf("%u is stored in loaction %c \n", p,*p);
    return 0;
}