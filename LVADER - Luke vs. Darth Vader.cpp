#include"bits/stdc++.h"
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007

ll dp[200008];

ll modex(ll x,ll n)
{
	if(n==0) return 1;
	ll t=modex(x,n/2);
	if(n%2==0)
	{
		return (t*t)%mod;
	}
	else
	{
		return (((t*t)%mod)*x)%mod;
	}
}

ll binomial(ll n,ll r)
{
	ll x=dp[n];
	ll y=dp[r];
	y*=dp[n-r];
	y%=mod;
	y=modex(y,mod-2);
	x*=y;
	x%=mod;
	return x;
}

int main()
{
	ll i;
	dp[0]=1;
	for(i=1;i<200004;i++)
	{
		dp[i]=dp[i-1]*i;
		dp[i]%=mod;
	}
	ll tt,yy;
	cin>>tt;
	yy=1;
	while(tt--)
	{
		ll a,b,c,d,m,n,s=0;
		cin>>a>>b>>c>>d;
		m=c-a;
		n=d-b;
		for(i=0;i<=min(n,m);i++)
		{
			ll e=binomial(n+m-2*i,n-i);
			ll f=binomial(n+m-i,i);
			e*=f;
			e%=mod;
			s+=e;
			s%=mod;
		}
		cout<<"Case "<<yy<<": "<<s<<endl;
		yy++;
	}
	
}
