#include"bits/stdc++.h"
using namespace std;
#define ll long long int
#define mod 1000000007
#define pb push_back
int main()
{
	ll n;
	scanf("%lli",&n);
	ll a[n],i,g,b[n-1];
	for(i=0;i<n;i++)
	{
		scanf("%lli",&a[i]);
		if(i>0) b[i-1]=a[i]-a[i-1];
	}
	for(i=0;i<n-1;i++)
	{
		if(i==0) g=b[i];
		else g=__gcd(g,b[i]);
	}
	ll s=0;
	for(i=0;i<n-1;i++)
	s+=b[i]/g-1;
	printf("%lli\n",s);
}
