#include<iostream>
using namespace std;
int main()
{
    string str;
    cin>>str;
    bool isTrue=true;
    for(int i=1;i<str.length();i++)
    {
        if(str[i]>=97)
        {
            isTrue=false;
            break;
        }
    }
    if(isTrue)
    {
        for(int i=0;i<str.length();i++)
        {
            if(str[i]>=97)
            {
                str[i]-=32;
            }else{
                str[i]+=32;
            }
        }
    }
    cout<<str;
    return 0;
}