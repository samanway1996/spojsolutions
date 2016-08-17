#include"bits/stdc++.h"
using namespace std;
#define ll long long int
#define mod 1000000007
#define pb push_back

ll dp[1000007];

int main()
{
	ll k,l,m,i,a,b,c,d,n;
	scanf("%lli%lli%lli",&k,&l,&m);
	dp[0]=0;
	for(i=1;i<1000007;i++)
	{
		a=dp[i-1];
		if(i>=k)
		{
			b=dp[i-k];
		}
		else b=a;
		if(i>=l)
		{
			c=dp[i-l];
		}
		else c=a;
		d=0;
		while(1)
		{
			if(a!=d && b!=d && c!=d)
			{
				dp[i]=d;
				break;
			}
			else d++;
		}
	}
	while(m--)
	{
		scanf("%lli",&n);
		if(dp[n]) printf("A");
		else printf("B");
	}
}
