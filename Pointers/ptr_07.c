#include <stdio.h>

int main() {
   int num1, num2, *ptr1, *ptr2, sum = 0;
    printf("Enter the first No:\n");
    scanf("%d", &num1);
    printf("Enter the second No: \n");
    scanf("%d", &num2);
   ptr1 = &num1;
   ptr2 = &num2;

   sum = *ptr1 + *ptr2;

   printf("The sum of the two numbers is: %d", sum);

   return 0;
}