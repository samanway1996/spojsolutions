#include<bits/stdc++.h>
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
		string s;
		ll n,i,j,st,sr,l;
		scanf("%lli",&n);
		cin>>s;
		ll dp[n];
		for(i=0;i<n;i++)
		dp[i]=0;
		for(i=0;i<n;i++)
		{
			if(s[i]=='1') 
			{
				st=1;
				sr=0;
			}
			else 
			{
				sr=1;
				st=0;
			}
			
			for(j=i-1;j>=0;j--)
			{
				l=dp[j];
				if(st>sr) 
				{
					l+=i-j;
					
				}
				dp[i]=max(dp[i],l);
				if(s[j]=='1') st++;
				else sr++;
				
			}
			
			if(st>sr) dp[i]=i+1;
		}
		for(i=n-1;i<n;i++)
		{
			cout<<dp[i]<<" ";
		}
		cout<<endl;
	}
}
