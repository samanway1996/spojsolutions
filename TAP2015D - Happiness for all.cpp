#include"bits/stdc++.h"
using namespace std;
#define ll long long int
#define mod 1000000007
#define pb push_back

ll visited[1010],cn=0;
vector<ll> vr[1010];
vector<ll> c_c;

void ini()
{
	ll i;
	for(i=0;i<1010;i++)
	{
		visited[i]=0;
		vr[i].clear();
	}
}

void dfs(ll s)
{
	visited[s]=1;
	//cout<<s<<" ";
	cn++;
	c_c.pb(s);
	ll sz=vr[s].size(),i;
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
	ll n,m,r,e,i,j,f;
	while(scanf("%lli",&n)!=EOF)
	{
		scanf("%lli%lli%lli",&m,&r,&e);
		ini();
		while(m--)
		{
			ll a,b;
			scanf("%lli%lli",&a,&b);
			vr[a].pb(b);
			vr[b].pb(a);
		}
		ll s=0,k,l;
		for(i=1;i<=n;i++)
		{
			if(visited[i]==0)
			{
			
			c_c.clear();
			cn=0;
			dfs(i);
			//cout<<endl;
			k=cn*e;
			f=0;
			for(j=0;j<c_c.size();j++)
			{
				f+=vr[c_c[j]].size();
			}
			f/=2;
			l=(cn*(cn-1))/2;
			l=l-f;
			l*=r;
			//cout<<k<<" "<<l<<endl;
			s+=min(k,l);
			
			}
		}
		printf("%lli\n",s);
	}
}
