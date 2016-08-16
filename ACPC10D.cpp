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
ll arr[1000006][20],arr2[1000006];
void sieve()
{
	ll i,j,k;
	
	for(i=2;i<1000006;i++)
	{
		if(arr2[i]==0)
		{
			j=i,k=0;
			while(j<1000006)
			{
				arr[j][arr2[j]]=i;
				arr2[j]++;
				j+=i;
			}
		}
	}
//	for(i=0;i<100;i++)
//	{
//		cout<<i<<" : ";
//		for(j=0;j<arr2[i];j++)
//		{
//			cout<<arr[i][j]<<" ";
//		}
//		cout<<endl;
//	}
}
ll prime[1000005];
ll pr[78500];
void sieve2()
{
	ll i,j,k;
	for(i=4;i<1000005;i+=2)
	prime[i]=1;
	for(j=3;j<1000005;j++)
	{
		if(prime[j]==0)
		{
			i=3*j;
			while(i<1000005)
			{
				prime[i]=1;
				i+=2*j;
			}
		}
	}
	k=0;
	for(i=2;i<1000005;i++)
	{
		if(prime[i]==0)
		{
			pr[k]=i;
			k++;
		}
	}
	//cout<<v.size();
	//cout<<pr[78498]<<pr[0]<<endl;
}
int main()
{
	ll o=1;
	while(1)
	{
		ll n,i,j,k;
		scanf("%lli",&n);
		if(n==0) break;
		ll dp[n][3];
		for(i=0;i<n;i++)
		{
			for(j=0;j<3;j++)
			{
				scanf("%lli",&dp[i][j]);
			}
		}
		dp[0][2]+=dp[0][1];
		for(i=1;i<n;i++)
		{
			if(i==1)
			{
				
				dp[1][0]+=dp[i-1][1];
				dp[1][1]+=min(min(dp[1][0],dp[0][1]),dp[0][2]);
				dp[i][2]+=min(min(dp[1][1],dp[0][1]),dp[0][2]);
			}
			else
			{
				dp[i][0]+=min(dp[i-1][0],dp[i-1][1]);
				dp[i][1]+=min(min(min(dp[i-1][2],dp[i-1][1]),dp[i-1][0]),dp[i][0]);
			
				dp[i][2]+=min(min(dp[i-1][2],dp[i-1][1]),dp[i][1]);
			}
		}
//		for(i=0;i<n;i++)
//		{
//			for(j=0;j<3;j++)
//			{
//				cout<<dp[i][j]<<" ";
//			}
//			cout<<endl;
//		}
		cout<<o<<". "<<dp[n-1][1]<<endl;
		o++;
	}
}
