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
		ll k,m,i,j;
		scanf("%lli%lli",&k,&m);
		if(m==0)
		{
			cout<<"Hey stupid robber, you can get 0.\n";
			continue;
		}
		ll a[m][2];
		
		for(i=0;i<m;i++)
		{
			scanf("%lli%lli",&a[i][0],&a[i][1]);
		}
		ll dp[m][k+1];
		for(i=0;i<=k;i++)
		{
			if(i<a[0][0])
			{
				dp[0][i]=0;
			}
			else
			{
				dp[0][i]=a[0][1];
			}
		}
		for(i=0;i<m;i++)
		{
			dp[i][0]=0;
		}
		for(i=1;i<m;i++)
		{
			for(j=1;j<=k;j++)
			{
				if(j<a[i][0])
				{
					dp[i][j]=dp[i-1][j];
				}
				else
				{
					dp[i][j]=max(dp[i-1][j],dp[i-1][j-a[i][0]]+a[i][1]);
				}
			}
		}
		printf("Hey stupid robber, you can get %lli.\n",dp[m-1][k]);
	}
}
