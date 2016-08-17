#include"bits/stdc++.h"
using namespace std;
#define ll long long int
#define pb push_back
#define mod 10000007
ll poww(ll x,ll n)
{
	if(n==0) return 1;
	ll t=poww(x,n/2);
	if(n%2==0)
	{
		return ((t%mod)*(t%mod))%mod;
		
	}
	else
	{
		return ((((t%mod)*(t%mod))%mod)*(x%mod))%mod;
	}
}
int main()
{
	while(1)
	{
		ll n,k;
		cin>>n>>k;
		if(n==0 && k==0) break;
		ll m=(n-1);
		//n%=mod;
		//m%=mod;
		//k%=mod;
		ll s=poww(n,k);
		s%=mod;
		s+=poww(n,n);
		s%=mod;
		ll o=poww(m,k);
		o*=2;
		s+=o;s%=mod;
		o=poww(m,m);
		o*=2;
		s+=o;s%=mod;
		cout<<s<<endl;
		
	}
}
