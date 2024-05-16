#include <stdio.h>
int main(){
            float i, n, sum=0, num avg;
             
                printf(" PLease Enter the value of n : \n");
            scanf("%f", &n);
            printf(" Enter the values of elements one by one : \n");
            for (int i = 0; i < n; i++)
            {
                scanf("%f", &num);
                sum = sum + num;

            }
            avg = sum/n;
            printf(" Sum of the %.2f Numbers = %.2f \n", n,sum);
            printf(" Average of the %.2f Numbers = %.2f \n", n, avg);
            return 0;

}