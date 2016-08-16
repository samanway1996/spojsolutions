#include"bits/stdc++.h"
using namespace std;
#define ll long long int
#define mod 1000000007
#define pb push_back

ll prime[10000007],pf[10000007][2],dp[10000007];

void comp()
{
	ll i,j,n;
	prime[0]=prime[1]=1;
	for(i=3;i*i<10000007;i+=2)
	{
		if(prime[i]==0)
		{
			j=3*i;
			while(j<10000007)
			{
				prime[j]=1;
				j+=2*i;
			}
		}
	}
//	for(i=3;i<100;i+=2)
//	{
//		if(prime[i]==0) cout<<i<<endl;
//	}
	for(i=3;i*i<10000007;i+=2)
	{
		if(prime[i]==0)
		{
			
			j=3*i;
			while(j<10000007)
			{
				if(pf[j][0]==0)
				{
					pf[j][0]=1;
					pf[j][1]=i;
				}
				j+=2*i;
			}
		}
	}
//	for(i=2;i<=100;i++)
//	{
//		if(i&1)
//		{
//			cout<<i<<" : "<<pf[i][1]<<endl;
//			
//		}
//		else cout<<i<<" : "<<"2\n";
//	}
	
	dp[0]=dp[1]=0;
	for(i=2;i<10000007;i++)
	{
		
		if (!(i&1))
		{
			n=2;
		}
		else
		{
			if(prime[i]==0) n=i;
			else
			n=pf[i][1];
		}
		dp[i]=dp[i-1]+n;
	}
}

int main()
{
	comp();
	ll tt;
	scanf("%lli",&tt);
	while(tt--)
	{
		ll n;
		scanf("%lli",&n);
		printf("%lli\n",dp[n]);
	}
}
