#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
#define pb push_back

ll arr[100008];
ll tree[500008];

void build(ll node,ll l, ll r)
{
	if(l==r)
	{
		tree[node]=arr[l]*arr[l];
		return;
	}
	ll m=(l+r)/2;
	build(2*node,l,m);
	build(2*node+1,m+1,r);
	tree[node]=tree[node*2]+tree[2*node+1];
}

void update1(ll node,ll l,ll r,ll idx,ll val)
{
	if(l==r)
	{
		tree[node]=val*val;
		return;
	}
	ll m=(l+r)/2;
	if(idx>=l && idx<=m)
	{
		update1(2*node,l,m,idx,val);
	}
	else
	{
		update1(2*node+1,m+1,r,idx,val);
	}
	tree[node]=tree[2*node]+tree[2*node+1];
	
}

void update2(ll node,ll l,ll r,ll idx,ll val)
{
	if(l==r)
	{
		tree[node]=arr[l]*arr[l];
		return;
	}
	ll m=(l+r)/2;
	if(idx>=l && idx<=m)
	{
		update2(2*node,l,m,idx,val);
	}
	else
	{
		update2(2*node+1,m+1,r,idx,val);
	}
	tree[node]=tree[2*node]+tree[2*node+1];
	
}

ll query(ll node,ll l,ll r,ll s,ll e)
{
	if(e<l || s>r || l>r)
	{
		return 0;
	}
	if(l>=s && r<=e)
	{
		return tree[node];
	}
	ll m=(l+r)/2;
	ll p1=query(2*node,l,m,s,e);
	ll p2=query(2*node+1,m+1,r,s,e);
	return (p1+p2);
}

int main()
{
	ll tt,ttt=1;
	scanf("%lli",&tt);
	while(tt--)
	{
		ll n,i,j,k,l,q,ii;
		scanf("%lli",&n);
		scanf("%lli",&q);
		for(i=1;i<=n;i++)
		{
			scanf("%lli",&arr[i]);
		}
		build(1,1,n);
		printf("Case %lli:  \n",ttt);
		while(q--)
		{
			scanf("%lli",&i);
			if(i==0)
			{
				scanf("%lli%lli%lli",&j,&k,&l);
				for(ii=j;ii<=k;ii++)
				{
					arr[ii]=l;
					update1(1,1,n,ii,l);
				}
			}
			if(i==1)
			{
				scanf("%lli%lli%lli",&j,&k,&l);
				for(ii=j;ii<=k;ii++)
				{
					arr[ii]+=l;
					update2(1,1,n,ii,l);
				}
			}
			if(i==2)
			{
				scanf("%lli%lli",&j,&k);
				l=query(1,1,n,j,k);
				printf("%lli\n",l);
			}
		}
		ttt++;
	}
}
