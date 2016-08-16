#include"bits/stdc++.h"
using namespace std;
#define ll long long int
#define mod 1000000007
#define pb push_back

int main()
{
	ll dp[1001];
	dp[0]=0;
	dp[1]=5;
	for(ll i=2;i<1001;i++)
	{
		dp[i]=dp[i-1]+5*i-2*i+1;
	}
	ll tt;
	//scanf("%lli",&tt);
	while(1)
	{
		ll n;
		scanf("%lli",&n);
		if(n==0) break;
		printf("%lli\n",dp[n]);
	}
}
