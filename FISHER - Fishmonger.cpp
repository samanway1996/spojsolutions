#include"bits/stdc++.h"
using namespace std;
#define ll long long int
#define mod 1000000007
#define pb push_back
int main()
{
	while(1)
	{
		ll n,t;
		scanf("%lli%lli",&n,&t);
		if(n==0 ) break; 
		ll time[n][n],toll[n][n],dp[n][t+1],i,j,k;
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				scanf("%lli",&time[i][j]);
			}
		}
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				scanf("%lli",&toll[i][j]);
			}
		}
		
		
		for(i=0;i<n;i++)
		{
			for(j=0;j<=t;j++)
			{
				dp[i][j]=1000000000;
			}
		}
		for(i=0;i<=t;i++)
		{
			dp[0][i]=0;
		}
		for(i=1;i<=t;i++)
		{
			for(j=1;j<n;j++)
			{
				for(k=0;k<n;k++)
				{
					if(time[k][j]>i) continue;
					if(j==k) continue;
					else
					{
						dp[j][i]=min(dp[j][i],dp[k][i-time[k][j]]+toll[k][j]);
						//<<i<<" "<<j<<endl;
					}
				}
			}
		}
		ll tme=0;
		for(i=0;i<=t;i++)
		{
			if(dp[n-1][i]==dp[n-1][t])
			{
				tme=i;
				break;
			}
		}
//		for(i=0;i<n;i++)
//		{
//			for(j=0;j<=t;j++)
//			{
//				cout<<dp[i][j]<<" ";
//			}
//			cout<<"\n";
//		}
		printf("%lli %lli\n",dp[n-1][t],tme);
	}
}
