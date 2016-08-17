#include"bits/stdc++.h"
using namespace std;
#define ll long long int
#define mod 1000000007
#define pb push_back

map<ll,vector<ll> > mp;
map<ll,ll> visited;
set<ll> st;

void dfs(ll s)
{
	visited[s]=1;
	ll sz=mp[s].size(),i;
	for(i=0;i<sz;i++)
	{
		if(visited[mp[s][i]]==0)
		{
			dfs(mp[s][i]);
		}
	}
}

int main()
{
	ll n,m,a,b,c=0,k=0;
	scanf("%lli%lli",&n,&m);
	while(m--)
	{
		scanf("%lli%lli",&a,&b);
		st.insert(a);
		st.insert(b);
		mp[a].pb(b);
		mp[b].pb(a);
	}
	set<ll>::iterator it;
	for(it=st.begin();it!=st.end();it++)
	{
		if(visited[*it]==0)
		{
			dfs(*it);
			c++;
		}
		k++;
	}
	printf("%lli",c+n-k);
	
}
