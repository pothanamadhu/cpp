#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,s;
	cin>>n;
	int ve[n];
	for(int i=0;i<n;i++)
	{
		cin>>ve[i];
	}
	for(int i=n-1;i>-1;i--)
	{
		cout<<ve[i]<<" ";
		s=s+ve[i];
	}
	cout<<"\n"<<s;
	return 0;
}
