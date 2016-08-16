#include"bits/stdc++.h"
using namespace std;
#define ll long long int
#define mod 1000000007
#define pb push_back

int main()
{
	while(1)
	{
		ll n,i;
		scanf("%lli",&n);
		if(n==0) break;
		ll a[n],b[n];
		for(i=0;i<n;i++)
		{
			scanf("%lli",&a[i]);
		}
		for(i=0;i<n;i++)
		{
			scanf("%lli",&b[i]);
		}
		sort(a,a+n);
		sort(b,b+n);
		ll s=0;
		for(i=0;i<n;i++)
		{
			s+=a[i]*b[n-1-i];
		}
		printf("%lli\n",s);
	}
}
