#include<iostream>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    for(int i=0;i<k;i++)
    {
        int remainder=n%10;
        if(remainder==0)
        {
            n/=10;
        }
        else{
            n--;
        }
    }
    cout<<n;
    return 0;
}