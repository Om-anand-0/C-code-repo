#include<stdio.h>

int main()
{
    int a, b;
    printf("Enter Numbers 1: ");
    scanf("%d", &a);
    printf("Enter Numbers 2: ");
    scanf("%d", &b);
    if (a > b) {
        printf("A is Greater\n");
    } else {
        printf("B is Greater\n");
    }

    return 0;
}