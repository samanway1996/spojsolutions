#include"bits/stdc++.h"
using namespace std;
#define ll long long int
#define mod 1000000007
#define pb push_back

ll dist[1000];
vector<pair<ll,ll> > vr[1000];

void ini()
{
	ll i,j;
	for(i=0;i<1000;i++)
	{
		dist[i]=1<<23;
		vr[i].clear();
	}
}

void dij(ll s,ll destination)
{
	dist[s]=0;
	set<pair<ll,ll> > st;
	st.insert(pair<ll,ll> (0,s));
	while(!st.empty())
	{
		ll a=(st.begin())->first;
		ll b=(st.begin())->second;
		if(destination==b) break;
		st.erase(st.begin());
		ll sz=vr[b].size(),i;
		for(i=0;i<sz;i++)
		{
			if(dist[b]+vr[b][i].second<dist[vr[b][i].first])
			{
				dist[vr[b][i].first]=dist[b]+vr[b][i].second;
				st.insert(pair<ll,ll> (dist[vr[b][i].first],vr[b][i].first));
			}
		}
	}
}

int main()
{
	while(1)
	{
		ini();
		ll m,n,a,i,j;
		char c,cc;
		scanf("%lli%lli",&m,&n);
		if(m==0 && n==0) break;
		
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				scanf("%lli",&a);
				scanf("%c%c",&cc,&c);
				//cout<<a<<" "<<c<<" ";
				if(a==0) continue;
				if(c=='>')
				{
					vr[i*(n+1)+j].pb(pair<ll,ll> (i*(n+1)+j+1,2520/a));
				}
				
				if(c=='<')
				{
					vr[i*(n+1)+j+1].pb(pair<ll,ll> (i*(n+1)+j,2520/a));
				}
				if(c=='*')
				{
					vr[i*(n+1)+j].pb(pair<ll,ll> (i*(n+1)+j+1,2520/a));
					vr[i*(n+1)+j+1].pb(pair<ll,ll> (i*(n+1)+j,2520/a));
				}
			}
			//cout<<endl;
			for(j=0;j<=n;j++)
			{
				scanf("%lli",&a);
				scanf("%c%c",&cc,&c);
				//cout<<a<<" "<<c<<" ";
				if(a==0) continue;
				if(c=='v')
				{
					vr[i*(n+1)+j].pb(pair<ll,ll> ((i+1)*(n+1)+j,2520/a));
				}
				if(c=='^')
				{
					vr[(i+1)*(n+1)+j].pb(pair<ll,ll> ((i)*(n+1)+j,2520/a));
				}
				if(c=='*')
				{
					vr[i*(n+1)+j].pb(pair<ll,ll> ((i+1)*(n+1)+j,2520/a));
					vr[(i+1)*(n+1)+j].pb(pair<ll,ll> ((i)*(n+1)+j,2520/a));
				}
			}
			//cout<<endl;
			
		}
		for(j=0;j<n;j++)
		{
			scanf("%lli",&a);
			scanf("%c%c",&cc,&c);
			//cout<<a<<" "<<c<<" ";
			if(a==0) continue;
			if(c=='>')
			{
				vr[i*(n+1)+j].pb(pair<ll,ll> (i*(n+1)+j+1,2520/a));
			}
				
			if(c=='<')
			{
				vr[i*(n+1)+j+1].pb(pair<ll,ll> (i*(n+1)+j,2520/a));
			}
			if(c=='*')
			{
				vr[i*(n+1)+j].pb(pair<ll,ll> (i*(n+1)+j+1,2520/a));
				vr[i*(n+1)+j+1].pb(pair<ll,ll> (i*(n+1)+j,2520/a));
			}
		}
		ll u=(m+1)*(n+1)-1;
		dij(0,u);
		if(dist[u]==1<<23)
		printf("Holiday\n");
		else
		printf("%lli blips\n",dist[u]);
	}
}
