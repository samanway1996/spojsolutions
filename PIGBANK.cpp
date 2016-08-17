#include"bits/stdc++.h"
using namespace std;
#define ll long long int
#define mod 1000000007
ll gcd(ll a, ll b)
{
	if(a==1 || b==1) return 1;
	if(a==0) return b;
	if(b==0) return a;
	if(a>b) return gcd(a%b,b);
	if(a<b) return gcd(b%a,a);
	
}
ll dp[506][10008][2];
int main()
{
	ll t,i,j,k;
	cin>>t;
	while(t--)
	{
		ll w1,w2,w;
		scanf("%lli%lli",&w1,&w2);
		w=w2-w1;
		ll n;
		scanf("%lli",&n);
		ll cost[n],wt[n];
		for(i=0;i<n;i++)
		{
			scanf("%lli%lli",&cost[i],&wt[i]);
		}
		for(i=0;i<n;i++)
		{
			dp[i][0][0]=0;
			dp[i][0][1]=0;
		}
		for(i=0;i<=w;i++)
		{
			if(i%wt[0]==0)
			{
				dp[0][i][0]=(i/wt[0])*cost[0];
				dp[0][i][1]=i;
			}
			else 
			{
				dp[0][i][0]=0;
				dp[0][i][1]=0;
			}
		}
		for(i=1;i<n;i++)
		{
			for(j=1;j<=w;j++)
			{
				if(j<wt[i])
				{
					dp[i][j][0]=dp[i-1][j][0];
					dp[i][j][1]=dp[i-1][j][1];
				}
				else
				{
					if(dp[i-1][j][0]==0)
					{
						dp[i][j][0]=dp[i][j-wt[i]][0]+cost[i];
						dp[i][j][1]=dp[i][j-wt[i]][1]+wt[i];
					}
					else 
					{
						dp[i][j][0]=min(dp[i-1][j][0],dp[i][j-wt[i]][0]+cost[i]);
						
						if(dp[i][j][0]==dp[i-1][j][0]) dp[i][j][1]=dp[i-1][j][1];
						else dp[i][j][1]=dp[i][j-wt[i]][1]+wt[i];
					}
				}
			}
		}
		if(dp[n-1][w][1]!=w ) 
		{
			printf("This is impossible.\n");
			
		}
		else
		{
			printf("The minimum amount of money in the piggy-bank is %lli.\n",dp[n-1][w][0]);
		}
		for(i=0;i<n;i++)
		{
			for(j=0;j<=w;j++)
			{
				cout<<dp[i][j][0]<<" ";
			}
			cout<<endl;
		}
		cout<<endl;
		for(i=0;i<n;i++)
		{
			for(j=0;j<=w;j++)
			{
				cout<<dp[i][j][1]<<" ";
			}
			cout<<endl;
		}
	}
}
