#include"bits/stdc++.h"
using namespace std;
#define ll long long int
#define mod 1000000007
#define pb push_back

ll a[1000008],b[1000008];

int main()
{
	ll n,k,i;
	scanf("%lli%lli",&n,&k);
	while(k--)
	{
		ll u,v;
		scanf("%lli%lli",&u,&v);
		a[u]++;
		a[v+1]--;
	}
	ll s=0;
	for(i=1;i<=n;i++)
	{
		s+=a[i];
		a[i]=s;
	}
	for(i=1;i<=n;i++)
	{
		b[i-1]=a[i];
	}
	sort(b,b+n);
	printf("%lli\n",b[n/2]);
}
