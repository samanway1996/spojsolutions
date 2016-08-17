#include"bits/stdc++.h"
using namespace std;
#define ll long long int
#define mod 1000000007
#define pb push_back
int main()
{
	ll tt;
	tt=10;
	while(tt--)
	{
		ll t1,t2,n;
		
		scanf("%lli%lli%lli",&t1,&t2,&n);
		ll a[n],b[n],i,j;
		
		
		map<ll,pair<ll,ll> > mp;
		for(i=0;i<n;i++)
		{
			scanf("%lli%lli",&a[i],&b[i]);
//			mp[a[i]]++;
//			mp[b[i]]--;
		}
		sort(a,a+n);
		sort(b,b+n);
		pair<ll,ll> pr=make_pair(0,0);
		
		mp.insert(pair<ll,pair<ll,ll> >(t1,pr));
		mp.insert(pair<ll,pair<ll,ll> >(t2,pr));
		for(i=0;i<n;i++)
		{
			mp[a[i]].first++;
			mp[b[i]].second--;
		}
		map<ll,pair<ll,ll> > ::iterator it;
		ll m=0,s=0,mn=10000000000;
		
		for(it=mp.begin();it!=mp.end();it++)
		{
			s+=it->second.first;
			if(it->first>=t1 && it->first<=t2)
			m=max(m,s);
			s+=it->second.second;
			if(it->first>=t1 && it->first<t2)
			mn=min(mn,s);
		}
		if(mn==10000000000) mn=0;
		printf("%lli %lli\n",mn,m);
	}
}
