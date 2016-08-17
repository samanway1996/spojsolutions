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
		ll n,i;
		scanf("%lli",&n);
		ll a[n];
		for(i=0;i<n;i++)
		{
			scanf("%lli",&a[i]);
		}
		ll dp[n];
		dp[n-1]=a[n-1];
		if(n-2>=0)
		dp[n-2]=a[n-2]+a[n-1];
		if(n>=3)
		dp[n-3]=a[n-3]+dp[n-2];
		if(n>=4)
		dp[n-4]=max(max(a[n-4]+dp[n-2],a[n-4]+a[n-3]),a[n-4]+a[n-3]+a[n-2]);
		if(n>=5)
		dp[n-5]=max(max(a[n-5]+dp[n-3],a[n-5]+a[n-4]+dp[n-1]),a[n-5]+a[n-4]+a[n-3]);
		if(n>=6)
		dp[n-6]=max(max(a[n-6]+dp[n-4],a[n-5]+a[n-6]+dp[n-2]),a[n-5]+a[n-4]+a[n-6]);
		for(i=n-7;i>=0;i--)
		{
			dp[i]=max(max(a[i]+dp[i+2],a[i]+a[i+1]+dp[i+4]),a[i]+a[i+1]+a[i+2]+dp[i+6]);
		}
		printf("%lli\n",dp[0]);
	}
}
