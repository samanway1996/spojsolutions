#include"bits/stdc++.h"
using namespace std;
#define ll long long int
#define mod 1000000007
#define pb push_back

ll dist[10007];
vector<pair<ll,ll> > vr[10007];

void ini()
{
	ll i;
	for(i=0;i<10007;i++)
	{
		dist[i]=1<<24;
		vr[i].clear();
	}
}

void dij(ll s,ll d)
{
	dist[s]=0;
	set<pair<ll,ll> > st;
	st.insert(pair<ll,ll> (0,s));
	while(!st.empty())
	{
		ll a=st.begin()->first;
		ll b=st.begin()->second;
		ll sz=vr[b].size(),i;
		if(b==d) break;
		st.erase(st.begin());
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
	ll tt;
	scanf("%lli",&tt);
	while(tt--)
	{
		ini();
		ll m,n,l,t;
		scanf("%lli%lli",&m,&n);
		ll a[m][n],i,j;
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				scanf("%lli",&a[i][j]);
			}
		}
		scanf("%lli%lli%lli",&i,&j,&t);
		i--;
		j--;
		l=i*n+j;
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				if(i<m-1)
				{
				
					vr[i*n+j].pb(pair<ll,ll> ((i+1)*n+j,a[i+1][j]) );
					vr[(i+1)*n+j].pb(pair<ll,ll> ((i)*n+j,a[i][j]) );
				}
				if(j<n-1)
				{
				
					vr[i*n+j].pb(pair<ll,ll> ((i)*n+j+1,a[i][j+1]) );
					vr[i*n+j+1].pb(pair<ll,ll> ((i)*n+j,a[i][j]) );
				}
			}
		}
		
		dij(0,l);
//		for(i=0;i<m*n;i++)
//		{
//			cout<<dist[i]<<" ";
//		}
//		cout<<l<<endl;
		if(dist[l]+a[0][0]<=t)
		printf("YES\n%lli\n",t-dist[l]-a[0][0]);
		else cout<<"NO\n";
	}
}
