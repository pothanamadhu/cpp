#include<iostream>
using namespace std;
int large(int arr[],int n)
{
	int l=0,r=0,m=0,u=0;
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(arr[i]>arr[j])
			{
				r=j-1;
				break;
			}
			else
			{
				r=n-1;
			}
		}
		for(int j=i-1;j>=0;j--)
		{
			if(arr[j]<arr[i])
			{
				l=j+1;
				break;
			}
			else
			{
				l=0;
			}
		}
		u=(r-l+1)*arr[i];
		if(u>m)
		{
			m=u;
		}
	}
	return m;
}
int main()
{
	int n,k;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	k=large(arr,n);
	cout<<k;
}
