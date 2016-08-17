#include"bits/stdc++.h"
using namespace std;
#define ll long long int
#define mod 1000000007
#define pb push_back
ll modex(ll x,ll n)
{
	if(n==0) return 1;
	ll tt=modex(x,n/2);
	if(n%2==0)
	{
		return (tt*tt)%mod;
	} 
	
	else
	{
		return (((tt*tt)%mod)*x)%mod;
	}
}
int main()
{
	ll tt;
	scanf("%lli",&tt);
	while(tt--)
	{
		ll n;
		scanf("%lli",&n);
		printf("%lli\n",modex(2,n-1));
	}
}
