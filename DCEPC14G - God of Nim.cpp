#include"bits/stdc++.h"
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
		ll n;
		scanf("%lli",&n);
		ll a[n],b[n],c[n],i;
		for(i=0;i<n;i++)
		{
			scanf("%lli",&a[i]);
		}
		for(i=0;i<n;i++)
		{
			scanf("%lli",&b[i]);
		}
		for(i=0;i<n;i++)
		{
			c[i]=a[i]%(b[i]+1);
		}
		ll x=c[0];
		for(i=1;i<n;i++)
		{
			x=x^c[i];
		}
		if(x==0) printf("Mishra\n");
		else printf("Amit\n");
	}
}
