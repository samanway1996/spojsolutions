#include"bits/stdc++.h"
using namespace std;
#define ll long long int
#define mod 1000000007
#define pb push_back

vector<ll> vr[10008];
ll dist[10008];

void ini()
{
	ll i;
	for(i=0;i<10008;i++)
	{
		vr[i].clear();
		dist[i]=1<<23;
	}
}

void dij(ll src,ll dst)
{
	dist[src]=0;
	set<pair<ll,ll> > st;
	st.insert(pair<ll,ll> (0,src));
	ll a,b,sz,i;
	while(!st.empty())
	{
		a=st.begin()->first;
		b=st.begin()->second;
		sz=vr[b].size();
		if(b==dst) break;
		st.erase(st.begin());
		for(i=0;i<sz;i++)
		{
			if(a+1<dist[vr[b][i]])
			{
				dist[vr[b][i]]=a+1;
				st.insert(pair<ll,ll> (dist[vr[b][i]],vr[b][i]));
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
		ll m,n,i,j,src,dst;
		vector<ll> r;
		scanf("%lli%lli",&m,&n);
		string s[m];
		for(i=0;i<m;i++)
		{
			cin>>s[i];
		}
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				if(s[i][j]!='#')
				{
					if(i+1<m)
					{
						if(s[i+1][j]!='#')
						{
							vr[i*n+j].pb((i+1)*n+j);
							vr[(i+1)*n+j].pb(i*n+j);
						}
					}
					if(j+1<n)
					{
						if(s[i][j+1]!='#')
						{
							vr[i*n+j].pb((i)*n+j+1);
							vr[(i)*n+j+1].pb(i*n+j);
						}
					}
					if(i==0 || i==m-1 || j==0 || j==n-1)
					{
						r.pb(i*n+j);
					}
					
				}
			
			}
		}
		if(r.size()!=2)
		{
			printf("invalid\n");
			continue;
		}
		src=r[0];
		dst=r[1];
		dij(src,dst);
		if(dist[dst]==1<<23)
		{
			printf("invalid\n");
		}
		else printf("valid\n");
	}
}
