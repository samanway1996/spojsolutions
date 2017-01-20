#include"bits/stdc++.h"
using namespace std;
#define ll long long int
#define mod 1000000007
#define pb push_back
ll mode=0;
 
ll visited[10002];
vector<ll> vr[10002];
void dfs(ll s)
{
	visited[s]=1;
	ll i;
	for(i=0;i<vr[s].size();i++)
	{
		if(visited[vr[s][i]]==0)
		{
			dfs(vr[s][i]);
		}
		else
		{
			mode=1;
		}
	}
}
int main()
{
	ll e,n;
	ll u,v;
	scanf("%lli%lli",&n,&e);
	while(e--)
	{
		scanf("%lli%lli",&u,&v);
		
		vr[u].pb(v);
	}
	ll i,j;
	
	for(i=1;i<=n;i++)
	{
		if(visited[i]==0)
		dfs(i);
	}
	if(mode==0)
	{
		cout<<"YES\n";
	}
	else cout<<"NO\n"; 
	
}
