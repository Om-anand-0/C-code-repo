#include<stdio.h>

int main()
{
    int avg, val, i, sum, count =0;
     printf("Enter no : \n");
     while (1)
     {
        scanf("%d", &val);
        if (val == -99){
            break;
        }
        sum = sum + val;
        count++
        
     }
     printf("the avg is %d \n", sum/count);
    return 0;
}