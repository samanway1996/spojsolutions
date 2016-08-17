#include"bits/stdc++.h"
using namespace std;
#define ll long long int
#define mod 1000000007
#define pb push_back
ll visited[1000007],dist[1000007];
vector<ll> vr[1000007];
vector<ll> vt;
ll maxi,lstvst;
void  ini()
{


	ll i;
	for(i=0;i<1000007;i++)
	{
		visited[i]=0;
		vr[i].clear();
		dist[i]=0;
	}
	vt.clear();
}

void ini2()
{
	ll i;
	for(i=0;i<1000007;i++)
	{
		visited[i]=0;
		
		dist[i]=0;
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
			dist[vr[s][i]]=dist[s]+1;
//			if(maxi<dist[vr[s][i]])
//			{
//				maxi=dist[vr[s][i]];
//				lstvst=vr[s][i];
//			}
			dfs(vr[s][i]);
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
		ll c,r,i,j;
		scanf("%lli%lli",&c,&r);
		string s[r];
		for(i=0;i<r;i++)
		{
			cin>>s[i];
		} 
		for(i=0;i<r;i++)
		{
			
			for(j=0;j<c;j++)
			{
				if(s[i][j]=='.')
				{
					if(i<r-1)
					{	
						if(s[i+1][j]=='.')
						{
							vr[(i+1)*c+j].pb(i*c+j);
							vr[i*c+j].pb((i+1)*c+j);
						}
					}
					if(j<c-1)
					{
						if(s[i][j+1]=='.')
						{
							vr[(i)*c+j+1].pb(i*c+j);
							vr[i*c+j].pb((i)*c+j+1);
						}
					}
					vt.pb(i*c+j);
				}
				
			}
		}
		
		ll sz=vt.size();
		
		
		dfs(vt[0]);
		maxi=0;
		for(i=0;i<sz;i++)
		{
			if(dist[vt[i]]>=maxi)
			{
				maxi=dist[vt[i]];
				lstvst=vt[i];
			}
		}
		
		ini2();
		maxi=0;
		dfs(lstvst);
		for(i=0;i<sz;i++)
		{
			if(dist[vt[i]]>maxi)
			{
				maxi=dist[vt[i]];
				lstvst=vt[i];
			}
		}
		cout<<"Maximum rope length is "<<maxi<<"."<<endl;
	}
}
