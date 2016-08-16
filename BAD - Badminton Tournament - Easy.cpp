#include"bits/stdc++.h"
using namespace std;
#define ll long long int
#define mod 1000000007
#define pb push_back

vector<ll> vr[258],dft[258];
ll size[258];
set<ll> st[258];
vector<pair<ll,ll> > v2;

void ini()
{
	ll i;
	for(i=1;i<258;i++)
	{
		vr[i].clear();
		
		st[i].clear();
		
	}
	v2.clear();
}

int main()
{
	ll tt,loc,k,sz,coun;
	scanf("%lli",&tt);
	while(tt--)
	{
		ini();
		ll n,a,b,i,j,m;
		scanf("%lli",&n);
		m=n*(n-1);
		m/=2;
		while(m--)
		{
			scanf("%lli%lli",&a,&b);
			
			vr[a].pb(b);
			
		}
		m=0;
		vector<bool> visited(n+1);
		for(i=1;i<=n;i++)
		{
			fill(visited.begin(),visited.end(),false);
			coun=0;
			for(j=0;j<vr[i].size();j++)
			{
				if(!visited[vr[i][j]])
				{
					coun++;
					visited[vr[i][j]]=true;
				}
				for(k=0;k<vr[vr[i][j]].size();k++)
				{
					if(!visited[vr[vr[i][j]][k]])
					{
						coun++;
						visited[vr[vr[i][j]][k]]=true;
					}
				}
				
			}
			
			
			if(coun>m) 
			{
				m=coun;
				loc=i;
			}
//			cout<<sz<<" "<<m<<endl;
//			set<ll> :: iterator it;
//			for(it=st[i].begin();it!=st[i].end();it++)
//			cout<<*it<<" ";
//			cout<<st[i].size()<<endl;
		}
		printf("%lli %lli\n",loc,m);
	}
}
