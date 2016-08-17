#include"bits/stdc++.h"
using namespace std;
#define ll long long int
#define mod 1000000007
#define pb push_back
ll dp[1007][1007],ans[1007][1007];
int main()
{
	ll k;
	while(1)
	{
		scanf("%lli",&k);
		if(k==0) break;
		string s1,s2;
		cin>>s1>>s2;
		ll l1=s1.length(),l2=s2.length(),i,j,kk;
		for(i=0;i<=l2;i++)
		{
			dp[0][i]=0;
			ans[0][i]=0;
		}
		for(i=0;i<=l1;i++)
		{
			dp[i][0]=0;
			ans[i][0]=0;
		}
		for(i=1;i<=l1;i++)
		{
			for(j=1;j<=l2;j++)
			{
				dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
				if(s1[i-1]==s2[j-1])
				{
					ans[i][j]=ans[i-1][j-1]+1;
				}
				else ans[i][j]=0;
				if(ans[i][j]>=k)
				{
					for(kk=k;kk<=ans[i][j];kk++)
					{
						dp[i][j]=max(dp[i][j],dp[i-kk][j-kk]+kk);
					}
				}
			}
		}
		printf("%lli\n",dp[l1][l2]);
	}
}
