#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int s,n;
    cin>>s>>n;
    int flag=1;
    pair<int,int>p[n];
    for(int i=0;i<n;i++)
    {
        cin>>p[i].first>>p[i].second;
    }
    sort(p,p+n);
   
    for(int i=0;i<n;i++)
    {
        
        if(s>p[i].first)
        {
            s+=p[i].second;
            // flag=1;
        }else{
            flag=0;
        
            break;  
        }
    }
    if(flag==1)
    {
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    return 0;
}