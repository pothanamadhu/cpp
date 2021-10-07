#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,m,l=1;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    map<int,int>mad;
    for(int i=0;i<n;i++)
    {
        m=k-arr[i];
        if(mad.find(m)!=mad.end())
        {
            cout<<i<<" "<<mad[m];
            break;
        }
        else
        {
            mad[arr[i]]+=i;
        }
    }
}