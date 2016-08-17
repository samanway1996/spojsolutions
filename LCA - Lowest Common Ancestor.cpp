#include"bits/stdc++.h"
using namespace std;
#define ll long long int
#define mod 1000000007
#define pb push_back

ll level[1010],root[1010];

void ini(ll k)
{
	ll i;
	for(i=1;i<=k;i++)
	{
		root[i]=0;
		level[i]=0;
	}
}

int main()
{
	ll tt,u=1;
	scanf("%lli",&tt);
	while(tt--)
	{
		ll n,i,j,k,a,b,c,r,sz,q;
		scanf("%lli",&n);
//		ll level[n+1],root[n+1];
		for(i=1;i<=n;i++)
		{
			root[i]=0;
			//level[i]=0;
		}
		//ini(n);
		vector<ll> vr[n+1];
		ll nn=n;
		i=1;
		while(nn--)
		{
			scanf("%lli",&k);
			while(k--)
			{
				scanf("%lli",&a);
				vr[i].pb(a);
				root[a]=i;
			}
			i++;
		}
		b=1;
		while(root[b]!=0)
		{
			b=root[b];
		}
		r=b;
		level[r]=1;
		deque<ll> dq;
		dq.pb(r);
		while(!dq.empty())
		{
			a=*dq.begin();
			dq.pop_front();
			sz=vr[a].size();
			for(i=0;i<sz;i++)
			{
				dq.pb(vr[a][i]);
				level[vr[a][i]]=level[a]+1;
			}
		}
		scanf("%lli",&q);
		printf("Case %lli:\n",u);
		while(q--)
		{
			scanf("%lli%lli",&a,&b);
			while(level[a]>level[b])
			{
				a=root[a];
			}
			while(level[a]<level[b])
			{
				b=root[b];
			}
			while(a!=b)
			{
				a=root[a];
				b=root[b];
			}
			printf("%lli\n",a);
		}
//		for(i=1;i<=n;i++)
//		{
//			cout<<root[i]<<"\n";
//		}
//		cout<<endl;
//		for(i=1;i<=n;i++)
//		{
//			cout<<level[i]<<"\n";
//		}
//		cout<<endl;
		u++;
	}
}
