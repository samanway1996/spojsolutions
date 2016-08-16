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
		ll a[n],b[n],i,j;
		map<ll,ll> mp;
		for(i=0;i<n;i++)
		{
			scanf("%lli%lli",&a[i],&b[i]);
			mp[a[i]]++;
			mp[b[i]]--;
		}
		map<ll,ll> ::iterator it;
		ll m=0,s=0;
		for(it=mp.begin();it!=mp.end();it++)
		{
			s+=it->second;
			m=max(m,s);
		}
		printf("%lli\n",m);
	}
}
