#include<iostream>
using namespace std;
int main()
{
    int a,b,k=1;
    cin>>a>>b;
    int t=2;
    while(1)
    {
        if(a%t==0 and b%t==0)
        {
            a=a/t;
            b=b/t;
            k=k*t;
        }
        else
        {
            t=t+1;
        }
        if(a<t or b<t)
        break;
    }
    cout<<k*a*b;
}