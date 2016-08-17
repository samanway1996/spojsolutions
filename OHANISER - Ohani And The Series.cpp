#include"bits/stdc++.h"
using namespace std;
#define ll long long int
#define mod 1000000007
#define pb push_back
int main()
{
	ll arr[100008],sum[100008];
	arr[0]=0;
	arr[1]=1;
	arr[2]=3;
	sum[0]=0;
	sum[1]=1;
	sum[2]=4;
	for(ll i=3;i<100008;i++)
	{
		arr[i]=3*arr[i-1]-sum[i-2];
		if(arr[i]<0)
		{
			arr[i]+=mod;
		}
		else
		{
			arr[i]%=mod;
		}
		sum[i]=(sum[i-1]+arr[i])%mod;
	}
	ll tt,c=0;
	scanf("%lli",&tt);
	while(tt--)
	{
		ll n;
		c++;
		scanf("%lli",&n);
		printf("Case %lli: %lli\n",c,arr[n]);
	}
}
