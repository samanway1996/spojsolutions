#include"bits/stdc++.h"
using namespace std;
#define ll long long int
#define mod 1000000007
int main()
{
	ll t;
	scanf("%lli",&t);
	while(t--)
	{
		ll n,k,i,d,e;
		scanf("%lli%lli",&n,&k);
		ll a[n];
		for(i=0;i<n;i++)
		{
			scanf("%lli",&a[i]);
		}
		sort(a,a+n);
		d=a[k-1]-a[0];
		for(i=k;i<n;i++)
		{
			e=a[i]-a[i-k+1];
			if(e<d) d=e;
		}
		printf("%lli\n",d);
	}
}
