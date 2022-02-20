#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n+1];
    int one=0,two=0;
    int lastTwo,lastOne;
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
    }
    for(int i=1;i<=n;i++)
    {
        if(arr[i]%2==0)
        {
          two++;
            lastTwo=i;
        }else{
            one++;
            lastOne=i;
        }
    }
    // cout<<one<<" "<<two;
    if(one>two)
    {
        
        cout<<lastTwo;
    }
    else{
        cout<<lastOne;
    }
    return 0;
}