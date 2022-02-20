#include<iostream>
using namespace std;
int main()
{
    int num;
    cin>>num;
    int sum=0;

    while(num>0)
    {
        int remainder=num%10;
        if(num/10>0)
        {
            if(remainder>4)
            {
            remainder=9-remainder;
            }
        }
    
        sum=sum*10+remainder;
        
        num/=10;
    }
    while(sum>0)
    {
        int rem=sum%10;
        num=num*10+rem;
        sum/=10;
    }

   cout<<num;
    return 0;
}