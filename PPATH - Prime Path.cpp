#include"bits/stdc++.h"
using namespace std;
#define ll long long int
#define mod 1000000007
#define pb push_back

ll prime[10008];
vector<ll> nodes;
vector<ll> vr[10008];
ll dist[10008];

bool check(ll a,ll b)
{
	ll i,j=b,c=0;
	for(i=a;i!=0;i=i/10)
	{
		if(i%10!=j%10)
		c++;
		j/=10;
	}
	if(c<=1) return true;
	else return false;
}

void ini()
{
	ll i;
	for(i=1000;i<10008;i++)
	{
		dist[i]=1<<23;
	}
}

void dij(ll s)
{
	dist[s]=0;
	set<pair<ll,ll> > st;
	st.insert(pair<ll,ll> (0,s));
	while(!st.empty())
	{
		ll a=st.begin()->first;
		ll b=st.begin()->second;
		st.erase(st.begin());
		ll sz=vr[b].size(),i;
		for(i=0;i<sz;i++)
		{
			if(dist[b]+1<dist[vr[b][i]])
			{
				dist[vr[b][i]]=dist[b]+1;
				st.insert(pair<ll,ll> (dist[b]+1,vr[b][i]));
			}
		}
	}
}

void comp()
{
	ll i,j;
	for(i=4;i<10008;i+=2)
	prime[i]=1;
	prime[0]=prime[1]=1;
	for(i=2;i*i<10008;i++)
	{
		if(prime[i]==0)
		{
			j=3*i;
			while(j<10008)
			{
				prime[j]=1;
				j+=i;
			}
		}
	}
	ll c=0;
	for(i=1000;i<=9999;i++)
	{
		if(prime[i]==0)
		{
			nodes.pb(i);
		}
	}
	ll sz=nodes.size();
	for(i=0;i<sz;i++)
	{
		for(j=i+1;j<sz;j++)
		{
			if(check(nodes[i],nodes[j]))
			{
				vr[nodes[i]].pb(nodes[j]);
				vr[nodes[j]].pb(nodes[i]);
			}
			
		}
	}
//	cout<<check(1033,8033)<<endl;
//	cout<<check(4352,4302)<<endl;
//	cout<<check(3678,3678)<<endl;
//	cout<<check(8986,6898)<<endl;
}

int main()
{
	comp();
	ll tt;
	scanf("%lli",&tt);
	while(tt--)
	{
		ll a,b;
		ini();
		scanf("%lli%lli",&a,&b);
		dij(a);
		printf("%lli\n",dist[b]);
	}
}
