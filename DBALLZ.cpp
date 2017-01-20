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
		ll e,l,i,j;
		scanf("%lli%lli",&e,&l);
		ll eg[l],tm[l];
		for(i=0;i<l;i++)
		{
			scanf("%lli",&eg[i]);
		}
		for(i=0;i<l;i++)
		{
			scanf("%lli",&tm[i]);
		}
		ll dp[1+1][e+1];
		for(i=0;i<=1;i++)
		{
			dp[i][0]=0;
		}
		for(i=0;i<=e;i++)
		{
			dp[0][i]=0;
			dp[1][i]=0;
		}
		for(i=1;i<=l;i++)
		{
			for(j=eg[i-1];j<=e;j++)
			{
				if(dp[1][j]<dp[1][j-eg[i-1]]+tm[i-1])
				{
					dp[1][j]=dp[1][j-eg[i-1]]+tm[i-1];
					dp[0][j]=dp[1][j];
				}
			}
			
		}
		printf("%lli\n",dp[1][e]);
	}
}
