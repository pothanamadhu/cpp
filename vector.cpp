#include<bits/stdc++.h>
using namespace std;
int main()
{
	vector<int>ve(5,100);
	ve.push_back(5);
	for(int i=0;i<ve.size();i++)
	{
		ve[i]=i;
	}
	for(int i=0;i<ve.size();i++)
	{
		cout<<ve[i]<<" ";
	}
	return 0;
}
