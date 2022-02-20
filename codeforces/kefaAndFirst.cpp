#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int count=1;
    int temp=0;
    for(int i=1;i<n;i++)
    {
        if(arr[i-1]<=arr[i])
        {
            count++;
        }else{
            temp=max(count,temp);
            count=1;
        }

    }
    temp=max(temp,count);
    cout<<temp;
    return 0;
}