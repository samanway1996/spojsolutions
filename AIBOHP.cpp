#include"bits/stdc++.h"
using namespace std;
#define ll long long int
#define mod 1000000007
ll dp[6500+1][6500+1];
int main()
{
	ll t,l,i,j,k;
	scanf("%lli",&t);
	while(t--)
	{
		char s[10000],s2[10000];
		scanf("%s",s);
		l=strlen(s);
		for(i=0;i<l;i++)
		{
			s2[i]=s[l-1-i];
		}
		s2[l]='\0';
		
		for(i=0;i<=l;i++)
		{
			for(j=0;j<=l;j++)
			{
				if(i==0 || j==0) dp[i][j]=0;
				else
				{
					if(s[i-1]==s2[j-1])
					{
						dp[i][j]=dp[i-1][j-1]+1;
					}
					else
					{
						dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
					}
				}
			}
		}
		l=l-dp[l][l];
		printf("%lli\n",l);
		
	}
	
}
