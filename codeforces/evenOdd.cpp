#include<iostream>
using namespace std;
int main()
{
    long long int n,k,ans;
    cin>>n>>k;
    if(k<=(n+1)/2)
    {
        ans=2*k-1;
    }else{
        long long int temp=k-((n+1)/2);
        ans=temp*2;
    }
    cout<<ans;
    return 0;
}