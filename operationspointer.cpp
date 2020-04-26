#include <stdio.h>
int main()
{
   int first, second, *p, *q;
   int sum,sub,mult,div,mod;

   printf("Enter two integers\n");
   scanf("%d%d", &first, &second);

   p = &first;
   q = &second;
  
    sum = *p + *q;
   sub= *p - *q;
    mult= *p * *q;
   div= *p / *q;
   mod= *p % *q;
   printf("Sum of the numbers = %d\n",sum);
    printf("Subtraction of the numbers = %d\n", sub);
 printf("multiplication of the numbers = %d\n", mult);
 printf("division of the numbers = %d\n", div);
 printf("modulus of the numbers = %d\n", mod);
   return 0;
}