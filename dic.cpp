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
	map<int,int>dic;
	for(int i=0;i!=ve.size();i++)
	{
		dic[ve[i]]+=1;
	}
	cout<<dic;
	for(int i=0;i!=dic.size();i++)
	{
		cout<<dic[i]<<"\n";
	}
}
