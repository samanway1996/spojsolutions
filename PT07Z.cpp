#include"bits/stdc++.h"
using namespace std;
#define ll long long int
#define mod 1000000007
#define pb push_back
ll visited[10008],depth[10008];
vector<ll> vr[10008];
ll lstvst;

void ini()
{
	ll i;
	for(i=0;i<10008;i++)
	{
		visited[i]=0;
		depth[i]=0;
	}
}

void dfs(ll s)
{
	visited[s]=1;
	
	ll sz=vr[s].size(),i;
	for(i=0;i<sz;i++)
	{
		if(visited[vr[s][i]]==0)
		{
			depth[vr[s][i]]=depth[s]+1;
			dfs(vr[s][i]);
			
		}
	}
}

int main()
{
	ll a,b,n,i;
	ini();
	scanf("%lli",&n);
	ll m=n,max=0;
	n--;
	while(n--)
	{
		scanf("%lli%lli",&a,&b);
		vr[a].pb(b);
		vr[b].pb(a);
	}
	dfs(1);
	for(i=1;i<=m;i++)
	{
		if(depth[i]>max)
		{
			max=depth[i];
			lstvst=i;
		}
	}
	ini();
	dfs(lstvst);
	for(i=1;i<=m;i++)
	{
		if(depth[i]>max)
		{
			max=depth[i];
			lstvst=i;
		}
	}
	cout<<max;
}
