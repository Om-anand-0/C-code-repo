#include<stdio.h>

int main()
{
    int i=0, ft =0, st=1,n;
    printf("enter the nth term :\n");
    scanf("%d", &n);
    do
    {
        printf("%d \n", ft);
        int nt = ft + st;
        ft = st;
        st = nt;
        i++;
    } while (i<n);
    
    return 0;
}