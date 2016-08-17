#include"bits/stdc++.h"
using namespace std;
#define ll long long int
#define mod 1000000007
#define pb push_back

ll dp[7][100008];

int main()
{
	ll k,n,i,j;
	scanf("%lli",&k);
	scanf("%lli",&n);
	ll a[n];
	for(i=0;i<n;i++)
	{
		scanf("%lli",&a[i]);
	}
	for(i=1;i<n;i++);
	{
		a[i]+=a[i-1];
	}
	for(i=0;i<n;i++)
	{
		dp[i][0]=1;
	}
	for(i=0;i<=k;i++)
	{
		if(i%a[0]==0)
		{
			dp[0][i]=1;
		}
	}
	for(i=1;i<n;i++)
	{
		for(j=1;j<=k;j++)
		{
			if(j<a[i])
			{
				dp[i][j]=dp[i-1][j];
			}
			else
			{
				dp[i][j]=dp[i-1][j]|dp[i][j-a[i]];
			}
		}
	}
	if(dp[n-1][k]==1) cout<<"YES";
	else cout<<"NO\n";
}
