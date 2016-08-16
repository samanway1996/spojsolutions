#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
#define pb push_back

char str[100000];

struct st
{
	ll lb;
	ll rb;
}tree[400000];

void build(ll node,ll l, ll r)
{
	if(l==r)
	{
		tree[node].lb=tree[node].rb=0;
		if(str[l-1]=='(') tree[node].lb=1;
		else tree[node].rb=1;
		return;
	}
	ll m=(l+r)/2;
	build(2*node,l,m);
	build(2*node+1,m+1,r);
	ll a,b,c,d;
	a=tree[2*node].lb,b=tree[2*node].rb,c=tree[2*node+1].lb,d=tree[2*node+1].rb;
	tree[node].lb=c;
	tree[node].rb=b;
	if(a>d)
	{
		tree[node].lb+=a-d;
	}
	else
	{
		tree[node].rb+=d-a;
	}
}

void update(ll node,ll l,ll r,ll idx,ll val)
{
	if(l==r)
	{
		if(tree[node].lb==1)
		{
			tree[node].lb=0;
			tree[node].rb=1;
		}
		else
		{
			tree[node].lb=1;
			tree[node].rb=0;
		}
		return;
	}
	ll m=(l+r)/2;
	if(idx>=l && idx<=m)
	{
		update(2*node,l,m,idx,val);
	}
	else
	{
		update(2*node+1,m+1,r,idx,val);
	}
	ll a,b,c,d;
	a=tree[2*node].lb,b=tree[2*node].rb,c=tree[2*node+1].lb,d=tree[2*node+1].rb;
	tree[node].lb=c;
	tree[node].rb=b;
	if(a>d)
	{
		tree[node].lb+=a-d;
	}
	else
	{
		tree[node].rb+=d-a;
	}
}

st query(ll node,ll l,ll r,ll s,ll e)
{
	if(l>r || s>r || e<l)
	{
		st nod;
		nod.lb=0;
		nod.rb=0;
		return nod;
	}
	if(s>=l && e<=r)
	{
		return tree[node];
	}
	ll m=(l+r)/2;
	ll a,b,c,d;
	st nn1=query(2*node,l,m,s,e),nn3;
	st nn2=query(2*node+1,m+1,r,s,e);
	a=nn1.lb,b=nn1.rb,c=nn2.lb,d=nn2.rb;
	nn3.lb=c;
	nn3.rb=b;
	if(a>d)
	{
		nn3.lb+=a-d;
	}
	else
	{
		nn3.rb+=d-a;
	}
	return nn3;
}

int main()
{
	ll tt=10,o=1;
	while(tt--)
	{
		ll n,q,i;
		
		scanf("%lli%s%lli",&n,str,&q);
		build(1,1,n);
		printf("Test %lli:\n",o);
		while(q--)
		{
			scanf("%lli",&i);
			if(i!=0)
			{
				if(str[i-1]=='(') 
				{
					str[i-1]=')';
					update(1,1,n,i,1);
				}
				else 
				{
					str[i-1]='(';
					update(1,1,n,i,1);
				}
			}
			else
			{
				st nod=query(1,1,n,1,n);
				//cout<<nod.lb<<" "<<nod.rb<<endl;
				if(nod.lb==0 && nod.rb==0)
				{
					printf("YES\n");
				}
				else
				{
					printf("NO\n");
				}
			}
		}
		o++;
	}
}
