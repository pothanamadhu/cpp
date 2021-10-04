#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector<int>ve(5);
	int k;
	cin>>k;
	for(int i=0;i!=ve.size();i++)
	{
		cin>>ve[i];
	}
	for(int i=0;i!=ve.size();i++)
	{
		if(ve[i]==k)
		{
			cout<<i;
			break;
		}
	}
	
}
