#include"bits/stdc++.h"
using namespace std;
#define ll long long int
#define mod 1000000007
#define pb push_back

ll arr[100006][26];

int main()
{
	ll tt;
	scanf("%lli",&tt);
	while(tt--)
	{
		ll i,j;
		string s;
		cin>>s;
		ll l=s.length();
		
		for(i=0;i<26;i++)
		{
			arr[0][i]=-1;
		}
		arr[0][s[0]-'A']++;
		for(i=1;i<l;i++)
		{
			for(j=0;j<26;j++)
			{
				arr[i][j]=arr[i-1][j];
			}
			arr[i][s[i]-'A']=i;
		}
		ll dp[l][2];
		dp[0][0]=1;
		dp[0][1]=1;
		for(i=1;i<l;i++)
		{
			dp[i][0]=(dp[i-1][0]+dp[i-1][1])%mod;
			if(arr[i-1][s[i]-'A']!=(-1))
			{
				dp[i][1]=(dp[i][0]-dp[arr[i-1][s[i]-'A']][0]);
				if(dp[i][1]<0)
				{
					dp[i][1]+=mod;
					
				}
				else
				{
					dp[i][1]%=mod;
				}
				
			}
			else
			dp[i][1]=dp[i][0];
			
			
		}
		printf("%lli\n",(dp[l-1][0]+dp[l-1][1])%mod);
	}
}
