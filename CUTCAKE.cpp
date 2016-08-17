#include"bits/stdc++.h"
using namespace std;
#define ll long long int
#define mod 1000000007
#define pb push_back
int main()
{
	ll tt;
	cin>>tt;
	while(tt--)
	{
		ll n,i;
		cin>>n;
		n=8*n;
		n=n-7;
		double r=sqrt(n);
		r=r-1;
		ll f=ceil(r);
		double t=f/2.0;
		ll a=ceil(t);
		printf("%lli\n",a);
	}
}
