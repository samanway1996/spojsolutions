#include"bits/stdc++.h"
using namespace std;
#define ll long long int
#define mod 1000000007
#define pb push_back

vector<ll> vr[62567];
ll visited[62567];
ll a=0,b=0,m,n,open;
string s[280];

void dfs(ll src)
{
	visited[src]=1;
	if(s[src/m][src%m]=='k') a++;
	if(s[src/m][src%m]=='v') b++;
	ll w1=src/m;
	ll w2=src%m;
	if(w1==0 || w1==n-1 || w2==0 || w2==m-1) open=1;
	ll i,sz=vr[src].size();
	for(i=0;i<sz;i++)
	{
		if(!visited[vr[src][i]])
		{
			dfs(vr[src][i]);
		}
	}
}

int main()
{
	ll i,j,w=0,p=0;
	scanf("%lli%lli",&n,&m);
	
	for(i=0;i<n;i++)
	{
		cin>>s[i];
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			if(s[i][j]!='#')
			{
				if(i+1<n)
				{
					if(s[i+1][j]!='#')
					{
						vr[i*m+j].pb((i+1)*m+j);
						vr[(i+1)*m+j].pb(i*m+j);
					}
				}
				if(j+1<m)
				{
					if(s[i][j+1]!='#')
					{
						vr[i*m+j].pb((i)*m+j+1);
						vr[(i)*m+j+1].pb(i*m+j);
					}
				}
			}
			
		}
	}
	for(i=0;i<m*n;i++)
	{
		if(visited[i]==0)
		{
			dfs(i);
			if(open==1)
			{
				p+=a;
				w+=b;
			}
			else
			{
				if(a>b) p+=a;
				if(a<=b) w+=b;
			}
			open=0;
			a=0;
			b=0;
		}
	}
	printf("%lli %lli",p,w);
	
}
