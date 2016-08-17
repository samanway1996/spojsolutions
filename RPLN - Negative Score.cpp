#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
#define pb push_back

ll arr[100008];

ll tree[500008];

void build(ll node,ll l,ll r)
{
	if(l==r)
	{
		tree[node]=arr[l];
		return;
	}
	ll m=(l+r)/2;
	build(2*node,l,m);
	build(2*node+1,m+1,r);
	tree[node]=min(tree[2*node],tree[2*node+1]);
	
}

ll query(ll node,ll l,ll r,ll s,ll e)
{
	if(s>r || e<l)
	{
		
		tree[node]=10000000000;
		return tree[node];
	}
	if(l>=s && r<=e)
	{
		return tree[node];
	}
	ll m=(l+r)/2;
	ll nn1=query(2*node,l,m,s,e);
	ll nn2=query(2*node+1,m+1,r,s,e);
	ll nn3;
	nn3=min(nn1,nn2);
	return nn3;
}

int main()
{
	ll tt,k=1;
	scanf("%lli",&tt);
	while(tt--)
	{
		ll n,q,i,j;
		scanf("%lli%lli",&n,&q);
		for(i=1;i<=n;i++)
		{
			scanf("%lli",&arr[i]);
		}
		build(1,1,n);
		printf("Scenario #%lli:\n\n",k);
		while(q--)
		{
			scanf("%lli%lli",&i,&j);
			ll no=query(1,1,n,i,j);
			printf("%lli\n\n",no);
		}
		k++;
	}
}
