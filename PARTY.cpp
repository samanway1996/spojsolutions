#include"bits/stdc++.h"
using namespace std;
#define ll long long int
#define mod 1000000007
ll pow(ll a,ll b,ll m)
{
	if(b==0) return 1;
	ll temp=pow(a,b/2,m);
	if(!(b&1)) 
	{
		return ((temp%m)*(temp%m))%m;
	}
	else
	{
		return ((((temp%m)*(temp%m))%m)*(a%m))%m;
	}
}
int main()
{
	while(1)
	{
	
	ll budget,club,i,j,c=0;
	//cin>>budget>>club;
	scanf("%lli%lli",&budget,&club);
	if(budget==0 && club==0) break;
	ll cost[club],fun[club];
	for(i=0;i<club;i++)
	{
		//cin>>cost[i]>>fun[i];
		scanf("%lli%lli",&cost[i],&fun[i]);
	}
	ll dp[club][budget+1][2];
	for(i=0;i<club;i++)
	{
		dp[i][0][0]=0;
		dp[i][0][1]=0;
	}
	for(i=0;i<=budget;i++)
	{
		if(cost[0]>i)
		{
			dp[0][i][0]=0;
			dp[0][i][1]=0;
			
		}
		else
		{
			dp[0][i][0]=fun[0];
			dp[0][i][1]=cost[0];
		} 
	}
	for(i=1;i<club;i++)
	{
		for(j=1;j<=budget;j++)
		{
			if(j<cost[i]) 
			
			{
				dp[i][j][0]=dp[i-1][j][0];
				dp[i][j][1]=dp[i-1][j][1];
			}
			else
			{
				dp[i][j][0]=max(dp[i-1][j][0],dp[i-1][j-cost[i]][0]+fun[i]);
				if(dp[i-1][j][0]==dp[i-1][j-cost[i]][0]+fun[i]) dp[i][j][1]=min(dp[i-1][j][1],dp[i-1][j-cost[i]][1]+cost[i]);
				else if(dp[i][j][0]==dp[i-1][j][0]) dp[i][j][1]=dp[i-1][j][1];
				else
				dp[i][j][1]=dp[i-1][j-cost[i]][1]+cost[i];
			}
		}
	}
//	for(i=0;i<club;i++)
//	{
//		for(j=0;j<=budget;j++)
//		{
//			cout<<dp[i][j][1]<<" ";
//		}
//		cout<<endl;
//	}
	//cout<<dp[club-1][budget][1]<<" "<<dp[club-1][budget][0]<<endl;
	
	printf("%lli %lli \n",dp[club-1][budget][1],dp[club-1][budget][0]);
	}
}
