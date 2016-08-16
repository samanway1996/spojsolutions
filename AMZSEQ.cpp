#include"bits/stdc++.h"
using namespace std;
#define ll long long int
#define mod 1000000007
#define pb push_back
 
int main()
{
	ll n,i;
	scanf("%lli",&n);
	ll dp[n+1][3];
	dp[0][0]=0;
	dp[0][1]=0;
	dp[0][2]=0;
	dp[1][0]=1;
	dp[1][1]=1;
	dp[1][2]=1;
	for(i=2;i<=n;i++)
	{
		dp[i][0]=dp[i-1][0]+dp[i-1][1];
		dp[i][1]=dp[i-1][0]+dp[i-1][1]+dp[i-1][2];
		dp[i][2]=dp[i-1][2]+dp[i-1][1];
	}
	ll s=dp[n][0]+dp[n][1]+dp[n][2];
	printf("%lli\n",s);
} 
