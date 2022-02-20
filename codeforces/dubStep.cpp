#include<iostream>
using namespace std;
int main()
{
    string str;
    cin>>str;
    string result="";
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]=='W')
        {
            if(str[i+1]=='U'&&str[i+2]=='B')
            {
                i+=2;
                if(result!="")
                {
                    result=result+" ";
                }
            }else{
                result=result+str[i];
            }
        }else{
            result=result+str[i];
        }

    }
    cout<<result;
    return 0;
}