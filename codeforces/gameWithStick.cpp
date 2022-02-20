#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int res=min(n,m);
    if(res%2==0)
    {
        cout<<"Malvika";
    }else{
        cout<<"Akshat";
    }
    return 0;
}