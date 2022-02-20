#include<iostream>
using namespace std;
int main()
{
   int num;
   cin>>num;
   int ans=0;
   for(int i=1;i<=num;i++)
   {
      int n=i,sum=0;
      while(n>0)
      {
         sum+=n%10;
         n/=10;
      }
      if(sum%2==0)
      {
         ans++;
      }
   }
   cout<<ans;
   return 0;
}