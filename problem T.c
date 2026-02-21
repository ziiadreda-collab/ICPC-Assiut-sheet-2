

#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n;
   scanf("%i",&n);

   int cntr=1,cntr2=n;

   for(int i=0;i<n;i++)
   {  int i2=1;

       while(i2<cntr2)
       {printf(" ");
       i2++;}

   for(int i2=0;i2<cntr;i2++)
   {
       printf("*");
   }
   printf("\n");
   cntr+=2;
   cntr2--;;}



    return 0;
}
