#include"bits/stdc++.h"
using namespace std;
#define ll long long int
#define mod 1000000007
#define pb push_back

int main()
{
	
		ll n,i,j,k;
		scanf("%lli",&n);
		ll a[n];
		for(i=0;i<n;i++)
		{
			scanf("%lli",&a[i]);
		}
		vector<ll> v;
		ll p=1,sz=1;
		v.pb(a[n-1]);
		for(i=n-2;i>=0;i--)
		{
			if(a[i]<v[sz-1])
			{
				p*=v[sz-1];
				p%=mod;
				v.pb(a[i]);
				sz++;
			}
			else
			{
				while(v.size()!=0 && v[sz-1]<a[i])
				{
					v.pop_back();
					sz--;
				}
				if(sz!=0)
				{
					p*=v[sz-1];
					p%=mod;
				}
				v.pb(a[i]);
				sz++;
			}
		}
		printf("%lli",p);
}
