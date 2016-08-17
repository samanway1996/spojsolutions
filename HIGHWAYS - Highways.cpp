#include"bits/stdc++.h"
using namespace std;
#define ll long long int
#define mod 1000000007
#define pb push_back
#define infi 1<<30
ll dist[1000007];
vector<pair<ll,ll> > v[1000007];
void ini()
{
	ll i;
	for(i=0;i<1000007;i++)
	dist[i]=(-infi);
	for(i=0;i<1000007;i++)
	v[i].clear();
}

void dij(ll s)
{
	ll i,j,sz,k;
	dist[s]=0;
	priority_queue<pair<ll,ll> > q;
	q.push(pair<ll,ll> (0,s));
	while(!(q.empty()))
	{
		pair<ll,ll> p;
		p=(q.top());
		i=p.first;
		j=p.second;
		q.pop();
		sz=v[j].size();
		for(k=0;k<sz;k++)
		{
			if( dist[j]+v[j][k].second>dist[v[j][k].first] )
			{
				dist[v[j][k].first]=dist[j]+v[j][k].second;
				q.push(pair<ll,ll> (dist[v[j][k].first],v[j][k].first));
			}
		}
	}
}

int main()
{
	ll tt;
	scanf("%lli",&tt);
	while(tt--)
	{
		ll n,m,d,dn;
		scanf("%lli%lli%lli%lli",&n,&m,&d,&dn);
		ini();
		while(m--)
		{
			ll a,b,e;
			scanf("%lli%lli%lli",&a,&b,&e);
			e=-e;
			v[a].pb(pair<ll,ll> (b,e));
			v[b].pb(pair<ll,ll> (a,e));
		}
		dij(d);
		if(dist[dn]==(-infi)) cout<<"NONE\n";
		else
		cout<<-dist[dn]<<endl;
	}
}
