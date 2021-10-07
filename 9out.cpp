#include<iostream>
using namespace std;
int nine(int n)
{
	int r;
	while(n)
	{
		r=n%10;
		n=n/10;
		if(r==9)
		{
			return 0;
			break;
		}
	}
	return 1;
}
int main()
{
	int n,k,i=1;
	cin>>n;
	while(k!=n)
	{
		if(nine(i))
		k=k+1;
		i=i+1;
	}
	cout<<i-1;
}
