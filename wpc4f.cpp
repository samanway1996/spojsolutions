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
		ll dp[n][3],i,j;
		for(i=0;i<n;i++)
		{
			scanf("%lli%lli%lli",&dp[i][0],&dp[i][1],&dp[i][2]);
		}
		for(i=1;i<n;i++)
		{
			dp[i][0]+=min(dp[i-1][1],dp[i-1][2]);
			dp[i][2]+=min(dp[i-1][0],dp[i-1][1]);
			dp[i][1]+=min(dp[i-1][0],dp[i-1][2]);
		}
		printf("%lli\n",min(min(dp[n-1][0],dp[n-1][1]),dp[n-1][2]));
	}
}
