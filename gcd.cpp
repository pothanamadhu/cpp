#include<iostream>
using namespace std;
int gcd(int a,int b)
{
	while(a!=0 && b!=0)
	{
		if(a>b)
		{
			a=a%b;
		}
		else
		{
			b=b%a;
		}
		
	}
	return a+b;
}
int main()
{
	int a,b,c,d;
	cin>>a>>b;
	cin>>c>>d;
	if(gcd(a,b)==gcd(c,d))
	cout<<true;
	else
	cout<<false;
}
