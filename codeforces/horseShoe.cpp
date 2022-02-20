#include<iostream>
#include<set>
using namespace std;
int main()
{
    int arr[4];
    set<int>s;
    for(int i=0;i<4;i++)
    {
        cin>>arr[i];
    }

    for(int i=0;i<4;i++)
    {
        s.insert(arr[i]);
    }
    int ans=4-s.size();
    cout<<ans;
    return 0;
}