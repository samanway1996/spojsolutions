#include"bits/stdc++.h"
using namespace std;
#define ll long long int
#define mod 1000000007
#define pb push_back

int main()
{
	ll tt,p[54],i;
	p[0]=1;
	for(i=1;i<54;i++)
	{
		p[i]=p[i-1]*2;
	}
	scanf("%lli",&tt);
	while(tt--)
	{
		ll n;
		scanf("%lli",&n);
		ll ans=p[n]-p[n-1];
		ll b;
		if(n==1) b=0;
		if(n==2) b=1;
		else b=(n-1)*p[n-2];
		cout<<ans<<" ";
		ans+=b;
		cout<<ans<<"\n";
	}
}
