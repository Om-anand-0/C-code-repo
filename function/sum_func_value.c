#include <stdio.h>

int sum(int a, int b) {
    return a + b;
}

int main() {
    int a = 10;
    int b = 20;
    printf("The sum is: %d\n", sum(a, b));
    return 0;
}