#include"bits/stdc++.h"
using namespace std;
#define ll long long int
#define mod 1000000007
#define pb push_back

ll dp[2000006];

void comp()
{
	ll i,j;
	dp[0]=1;
	for(i=1;i<2000006;i++)
	{
		dp[i]=dp[i-1]*i;
		dp[i]%=mod;
	}
//	for(i=0;i<100;i++)
//	{
//		cout<<dp[i]<<endl;
//	}
}

ll modex(ll x,ll n)
{
	if(n==0) return 1;
	ll t=modex(x,n/2);
	if(n&1)
	{
		return (((t*t)%mod)*x)%mod;
	}
	else
	{
		return (t*t)%mod;
	}
}

int main()
{
	comp();
	ll tt;
	scanf("%lli",&tt);
	while(tt--)
	{
		ll a,b;
		scanf("%lli%lli",&a,&b);
		ll p=dp[a]*dp[b];
		p%=mod;
		ll q=dp[a+b];
		ll r=modex(p,mod-2);
		ll ans=q*r;
		ans%=mod;
		printf("%lli\n",ans);
	}
}
