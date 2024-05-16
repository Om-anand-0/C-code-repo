#include<stdio.h>

int main()
{
   char str1[20],str2[20],i,j;
   printf("Enter first string: \n");
   gets(str1);
   printf("Enter second string: \n");
   gets(str2);

   i = 0;
   j = 0;
   while (str1[i]!='\0')
   {
      i++;
   }
   while (str2[j]!='\0')
   {
      j++;
   }

   i = 0;
   while(str1[i] == str2[i] && str1[i]!= '\0' && str2[i]!= '\0')
   {
      i++;
   }

   if(str1[i] == '\0' && str2[i] == '\0')
   {
      printf("The strings are equal.\n");
   }
   else
   {
      printf("The strings are not equal.\n");
   }

   return 0;
}