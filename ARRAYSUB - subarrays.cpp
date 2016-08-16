#include"bits/stdc++.h"
using namespace std;
#define ll long long int
#define mod 1000000007
#define pb push_back
#define infi 1<<29

ll a[1000007];
struct stnode
{
	ll x;
	ll y;	
} tree[4000009];

void build(ll node,ll l,ll r)
{
	if(l==r)
	{
		tree[node].x=a[l];
		tree[node].y=a[l];
		return;
	}
	ll mid=(l+r)/2;
	build(2*node,l,mid);
	build(2*node+1,mid+1,r);
	tree[node].x=max(tree[2*node].x,tree[2*node+1].x);
	tree[node].y=min(tree[2*node].y,tree[2*node+1].y);
}

stnode query(ll node,ll l,ll r,ll start,ll end)
{
	if(end<l || start>r || l>r)
	{
		stnode nod;
		nod.x= -infi;
		nod.y=  infi;
		return nod;
	}
	if(l>=start && r<=end)
	{
		return tree[node];
	}
	stnode n1,n2,n3;
	ll mid=(l+r)/2;
	n1=query(2*node,l,mid,start,end);
	n2=query(2*node+1,mid+1,r,start,end);
	n3.x=max(n1.x,n2.x);
	n3.y=min(n1.y,n2.y);
	return n3;
}

int main()
{
	ll n,m,c,i;
	scanf("%lli",&n);
	for(i=1;i<=n;i++)
	scanf("%lli",&a[i]);
	
	build(1,1,n);
	ll q;
	scanf("%lli",&q);
	for(i=1;i<=n-q+1;i++)
	{
		stnode r=query(1,1,n,i,i+q-1);
		printf("%lli ",r.x);
	}
}
