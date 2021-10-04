#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,s,find;
	cin>>n;
	cin>>find;
	int ve[n];
	for(int i=0;i<n;i++)
	{
		cin>>ve[i];
	}
	for(int i=n-1;i>-1;i--)
	{
		if(find==ve[i])
		{
			cout<<i;
			break;
		}
	}
	return 0;
}
