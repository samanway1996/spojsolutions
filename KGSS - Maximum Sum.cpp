#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
#define pb push_back

ll arr[100009];

struct st
{
	ll m1;
	ll m2;
}tree[500008];

void build(ll node,ll l,ll r)
{
	if(l==r)
	{
		tree[node].m1=arr[l];
		tree[node].m2=0;
		return;
	}
	ll m=(l+r)/2;
	build(2*node,l,m);
	build(2*node+1,m+1,r);
	ll a,b,c,d,e,f;
	st n1=tree[2*node],n2=tree[2*node+1];
	a=n1.m1,b=n1.m2,c=n2.m1,d=n2.m2;
	if(a>c)
	{
		e=a;
		f=max(b,c);
		
	}
	else if(a<c)
	{
		e=c;
		f=max(d,a);
	}
	else if(a==c)
	{
		e=a;
		f=a;
	}
	tree[node].m1=e;
	tree[node].m2=f;
}

void update(ll node,ll l,ll r,ll idx,ll val)
{
	if(l==r)
	{
		tree[node].m1=val;
		tree[node].m2=0;
		return;
	}
	ll m=(l+r)/2;
	if(idx>=l && idx<=m)
	{
		update(2*node,l ,m,idx,val);
	}
	else
	{
		update(2*node+1,m+1,r,idx,val);
	}
	ll a,b,c,d,e,f;
	st n1=tree[2*node],n2=tree[2*node+1];
	a=n1.m1,b=n1.m2,c=n2.m1,d=n2.m2;
	if(a>c)
	{
		e=a;
		f=max(b,c);
		
	}
	else if(a<c)
	{
		e=c;
		f=max(d,a);
	}
	else if(a==c)
	{
		e=a;
		f=a;
	}
	tree[node].m1=e;
	tree[node].m2=f;
}

st query(ll node,ll l,ll r,ll start,ll end)
{
	if(start>r || end<l || l>r)
	{
		st no;
		no.m1=-10000000000;
		no.m2=-10000000000;
		return no;
	}
	if(l>=start && r<=end)
	{
		return tree[node];
	}
	ll m=(l+r)/2;
	ll a,b,c,d,e,f;
	st n1=query(2*node,l,m,start,end),n2=query(2*node+1,m+1,r,start,end);
	a=n1.m1,b=n1.m2,c=n2.m1,d=n2.m2;
	if(a>c)
	{
		e=a;
		f=max(b,c);
	}
	else if(a<c)
	{
		e=c;
		f=max(d,a);
	}
	else if(a==c)
	{
		e=a;
		f=a;
	}
	st no;
	no.m1=e;
	no.m2=f;
	return no;
}

int main()
{
	ll n,i,j,k;
	scanf("%lli",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%lli",&arr[i]);
	}
	build(1,1,n);
	ll q;
	scanf("%lli",&q);
	while(q--)
	{
		string s;
		cin>>s;
		scanf("%lli%lli",&i,&j);
		if(s[0]=='U')
		{
			arr[i]=j;
			update(1,1,n,i,j);
		}
		else
		{
			st no=query(1,1,n,i,j);
			printf("%lli\n",no.m1+no.m2);
		}
	}
}
