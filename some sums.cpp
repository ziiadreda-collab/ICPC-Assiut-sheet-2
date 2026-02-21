#include <iostream>

using namespace std;

int main()
{//cout<<14/=10;
    int n,a,b,sum=0;
    cin>>n>>a>>b;
 int z=max(a,b),s=min(a,b);

    for(int i=1;i<=n;i++)//20,2,5
    {int x=0,y=0;
    for(int check=i;check>0;check/=10)//1//2,14
    {
        x=check%10;//1,2,4,1
        y+=x;//4+1
    }if(y>=s&&y<=z)
       {
           sum+=i;
       }




    }cout<<sum;
    return 0;
}
