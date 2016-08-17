#include"bits/stdc++.h"
using namespace std;
#define ll long long int
#define mod 1000000007
#define pb push_back
ll visited[1000008];
vector<ll> vr[1000008];
vector<ll> vt;
ll coun=0;
void ini()
{
	ll i;
	for(i=0;i<1000008;i++)
	{
		visited[i]=0;
		vr[i].clear();
	}
	vt.clear();
}

//,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,
void dfs(ll s)
{
	visited[s]=1;
	coun++;
	//cout<<s<<endl;
	ll i,sz=vr[s].size();
	for(i=0;i<sz;i++)
	{
		if(visited[vr[s][i]]==0)
		{
			dfs(vr[s][i]);
		}
	}
}

int main()
{
	ll n,m,i,j;
	while(1)
	{
		scanf("%lli%lli",&n,&m);
		map<ll,ll> mp;
		ini();
		if(n==0 && m==0)
		{
			break;
		}
		ll arr[n][m];
		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
			{
				scanf("%lli",&arr[i][j]);
				
			}
		}
		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
			{
				if(arr[i][j]==1)
				{
					if(i+1<n)
					{
						if(arr[i+1][j]==1)
						{
							vr[i*m+j].pb((i+1)*m+j);
							vr[(i+1)*m+j].pb(i*m+j);
						}
					}
					if(j+1<m)
					{
						if(arr[i][j+1]==1)
						{
							vr[i*m+j].pb(i*m+j+1);
							vr[i*m+j+1].pb(i*m+j);
						}
					}
					vt.pb(i*m+j);
				}
				
			}
		}
		
		ll sz=vt.size();
		for(i=0;i<sz;i++)
		{
			if(visited[vt[i]]==0)
			{
				dfs(vt[i]);
				mp[coun]++;
				coun=0;
			}
		}
		
		map<ll,ll>:: iterator it;
		ll sm=0;
		for(it=mp.begin();it!=mp.end();it++)
		{
			sm+=it->second;
		}
		cout<<sm<<endl;
		for(it=mp.begin();it!=mp.end();it++)
		{
			printf("%lli %lli\n",it->first,it->second);
		}
	}
	
}
