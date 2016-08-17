#include"bits/stdc++.h"
using namespace std;
#define ll long long int
#define mod 1000000007
#define pb push_back

ll a[1000008];

int main()
{
	
	a[0]=0;
	a[1]=0;
	a[2]=1;
	a[3]=1;
	for(ll i=4;i<1000008;i++)
	{
		a[i]=a[i-2]+a[i-3];
		a[i]%=mod;
	}
	ll tt;
	scanf("%lli",&tt);
	while(tt--)
	{
		ll n;
		scanf("%lli",&n);
		printf("%lli\n",a[n]);
	}
}
