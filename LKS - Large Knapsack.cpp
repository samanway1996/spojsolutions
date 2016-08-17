#include<stdio.h>

#define ll long int
#define mod 1000000007


ll dp[2][3000000];

int main()
{
	ll k,n,i,j,kk,sz;
	scanf("%ld%ld",&k,&n);
	//cout<<k<<endl;
	ll a[n][2];
	for(i=0;i<n;i++)
	{
		scanf("%ld%ld",&a[i][0],&a[i][1]);
	}
	i=a[0][1];
	while(i<=k)
	{
		dp[0][i]=a[0][0];
		
		i++;
	}
	i=1;
	
	while(i<n)
	{
		if(i&1)
		{
			j=0;
			while(j<a[i][1])
			{
				dp[1][j]=dp[0][j];
				j++;
			}
			j=a[i][1];
			while(j<=k)
			{
				
				if(dp[0][j-a[i][1]]+a[i][0]>dp[0][j])
				{
					dp[1][j]=dp[0][j-a[i][1]]+a[i][0];
				
				}
				else dp[1][j]=dp[0][j];
				j++;
			}
			
		}
		else
		{
			j=0;
			while(j<a[i][1])
			{
				dp[0][j]=dp[1][j];
				j++;
			}
			j=a[i][1];
			while(j<=k)
			{
				
				if(dp[1][j-a[i][1]]+a[i][0]>dp[1][j])
				{
					dp[0][j]=dp[1][j-a[i][1]]+a[i][0];
				
				}
				else dp[0][j]=dp[1][j];
				j++;
			}
		}
		
		i++;
	}
	
	if(n&1)
	{
		printf("%lli",dp[0][k]);
	}
	else printf("%lli",dp[1][k]);
	
}
