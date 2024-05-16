#include<stdio.h>

int main()
{
    int a, b,c;
    printf("Enter Numbers 1: ");
    scanf("%d", &a);
    printf("Enter Numbers 2: ");
    scanf("%d", &b);
    printf("Enter Numbers 3: ");
    scanf("%d", &c);
    if (a > b && b > c ) {
        printf("A is Greater\n");
    }
    if (b > c && b > a ) {
        printf("B is Greater\n");
    } else {
        printf("C is Greater\n");
    }

    return 0;
}