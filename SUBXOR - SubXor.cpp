#include"bits/stdc++.h"
using namespace std;
#define ll long long int
#define mod 1000000007
#define pb push_back

struct trie 
{
	struct trie *rf[2];
	ll num;
};

struct trie * getnode()
{
	struct trie *newn=new trie;
	newn->rf[0]=NULL;
	newn->rf[1]=NULL;
	newn->num=0;
	return newn;
}

void insert(struct trie **root,ll nm)
{
	ll i=nm;
	vector<ll> v(20);
	ll o=0;
	while(i)
	{
		v[o]=i%2;
		o++;
		i/=2;
	}
	while(o<19)
	{
		v[o]=0;
		o++;
	}
	struct trie *ptr=*root;
	for(i=19;i>=0;i--)
	{
		if(ptr->rf[v[i]]==NULL)
		{
			ptr->rf[v[i]]=getnode();
		}
		ptr->num++;
		ptr=ptr->rf[v[i]];
	}
}

ll find(struct trie *root,ll x,ll k)
{
	ll i=x;
	vector<ll> v(20),v2(20);
	ll o=0;
	while(i)
	{
		v[o]=i%2;
		o++;
		i/=2;
	}
	while(o<19)
	{
		v[o]=0;
		o++;
	}
	i=k;
	o=0;
	while(i)
	{
		v2[o]=i%2;
		o++;
		i/=2;
	}
	while(o<19)
	{
		v2[o]=0;
		o++;
	}
	
	ll s=0;
	struct trie *ptr=root;
	for(i=19;i>=0;i--)
	{
		if(v[i]==0 && v2[i]==0)
		{
			if(ptr->rf[0]==NULL)
			{
				return s;
			}
			else
			ptr=ptr->rf[0];
		}
		else if(v[i]==0 && v2[i]==1)
		{
			if(ptr->rf[0]!=NULL)
			{
				s+=ptr->rf[0]->num;
			}
			
			if(ptr->rf[1]!=NULL)
			{
				ptr=ptr->rf[1];
			}
			else
			return s;
			
		}
		else if(v[i]==1 && v2[i]==0)
		{
			if(ptr->rf[1]==NULL)
			{
				return s;
			}
			else
			ptr=ptr->rf[1];
		}
		else if(v[i]==1 && v2[i]==1)
		{
			if(ptr->rf[1]!=NULL)
			{
				s+=ptr->rf[1]->num;
			}
			if(ptr->rf[0]!=NULL)
			{
				ptr=ptr->rf[0];
			}
			else
			return s;
		}
		
	}
	s+=ptr->num;
	return s;
}

int main()
{
	ll tt;
	scanf("%lli",&tt);
	while(tt--)
	{
		ll n,k;
		scanf("%lli%lli",&n,&k);
		ll a[n],i;
		for(i=0;i<n;i++)
		{
			scanf("%lli",&a[i]);
		}
		struct trie *root=getnode();
		ll x=0,ans=0;
		insert(&root,0);
		for(i=0;i<n;i++)
		{
			x=x^a[i];
			ans+=find(root,x,k);
			insert(&root,x);
		}
		printf("%lli\n",ans);
	}
}
