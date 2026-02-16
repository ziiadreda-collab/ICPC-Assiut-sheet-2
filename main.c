#include <stdio.h>
#include <stdlib.h>
int max(int a,int b)
{
    if(a>b)
        return a;
   else
        return b;
}
int min(int a,int b)
{
    if(a>b)
        return b;
    else
        return a;
}
int is_odd(int x)
if(x%2==0)
    return 0;
else
    return 1;

int main()
{int test;
scanf("%i",&test);
   for(int t=0;t<test;t++)
   {long int n1,n2,sum=0;
     scanf("%i",&n1);
     scanf("%i",&n2);

    long int x=max(n1,n2);
    long int z=min(n1,n2);
    for(int i=z;i<=x,;i++)
    { if(is_odd(i)==1)
        {sum+=i;}
      else
        {continue;}}

    //printf("sum =%i\n",sum);}
   return 0;}





