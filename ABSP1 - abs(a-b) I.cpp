#include"bits/stdc++.h"
using namespace std;
#define ll long long int
#define mod 1000000007
#define pb push_back

int main()
{
	ll tt;
	scanf("%lli",&tt);
	while(tt--)
	{
		ll n;
		scanf("%lli",&n);
		ll a[n],i,dp[n];
		for(i=0;i<n;i++)
		{
			scanf("%lli",&a[i]);
		}
		dp[0]=a[0];
		for(i=1;i<n;i++)
		{
			dp[i]=dp[i-1]+a[i];
		}
		ll s=0;
		for(i=0;i<n;i++)
		{
			s+=a[i]*((i+1))-dp[i];
		}
		printf("%lli\n",s);
	}
}
