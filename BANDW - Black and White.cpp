#include"bits/stdc++.h"
using namespace std;
#define ll long long int
#define mod 1000000007
#define pb push_back
int main()
{
	while(1)
	{
		string s1,s2;
		cin>>s1>>s2;
		if(s1[0]=='*') break;
		
		ll l=s1.length(),i,j;
		ll dp[l];
		if(s1[0]==s2[0])
		{
			dp[0]=0;
		}
		else dp[0]=1;
		for(i=1;i<l;i++)
		{
			if(s1[i]!=s2[i])
			{
				dp[i]=dp[i-1]+1;
			}
			else dp[i]=dp[i-1];
		}
		ll a[l+1],m=0;
		a[0]=0;
		for(i=1;i<=l;i++)
		{
			if(s1[i-1]==s2[i-1])
			{
				a[i]=a[i-1];
				m=0;
			}
			else
			{
				if(m==1)
				{
					a[i]=a[i-1];
				}
				else
				{
					a[i]=a[i-1]+1;
					m=1;
				}
				
			}
		}
		
		printf("%lli\n",a[l]);
	}
	
	
}
