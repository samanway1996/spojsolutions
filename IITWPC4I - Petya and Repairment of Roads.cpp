#include"bits/stdc++.h"
using namespace std;
#define ll long long int
#define mod 1000000007
#define pb push_back

ll root[100006][2],size[100006];

void ini()
{
	ll i;
	for(i=0;i<100006;i++)
	{
		root[i][0]=i;
		root[i][1]=1;
		size[i]=1;
	}
}

ll find_root(ll s)
{
	while(s!=root[s][0])
	{
		s=root[root[s][0]][0];
	}
	return s;
}

void uni(ll i,ll j)
{
	if(size[i]<size[j])
	{
		root[i][0]=root[j][0];
		size[j]+=size[i];
		if(root[i][1]==0 && root[j][1]==1)
		{
			root[i][1]=1;
		}
		else if(root[i][1]==1 && root[j][1]==0)
		{
			root[j][1]=1;
		}
		
	}
	else
	{
		root[j][0]=root[i][0];
		size[i]+=size[j];
		if(root[i][1]==0 && root[j][1]==1)
		{
			root[i][1]=1;
		}
		else if(root[i][1]==1 && root[j][1]==0)
		{
			root[j][1]=1;
		}
	}
}

int main()
{
	ll tt;
	scanf("%lli",&tt);
	while(tt--)
	{
		ini();
		ll n,m,ans=0,u,v,c,uu,vv,coun=0,ru,rv;
		set<pair<ll,ll>  > st;
		scanf("%lli%lli",&n,&m);
		ll a[n],i,j,s=0;
		for(i=0;i<n;i++)
		{
			scanf("%lli",&a[i]);
			s+=a[i];
			root[i+1][1]=a[i];
		}
		while(m--)
		{
			scanf("%lli%lli%lli",&u,&v,&c);
			uu=1000000*u+v;
			st.insert(pair<ll,ll> (c,uu));
		}
		if(s==0)
		{
			printf("impossible\n");
			continue;
		}
		set<pair<ll,ll>  >::iterator it;
		for(it=st.begin();it!=st.end();++it)
		{
			if(coun==n-s)
			{
				break;
			}
 			u=(it->second)/1000000;
			v=(it->second)%1000000;
			c=it->first;
			ru=find_root(u);
			rv=find_root(v);
			if(ru==rv) continue;
			else if(root[ru][1]==1 && root[rv][1]==1)
			{
				continue;
			}
			uni(ru,rv);
			ans+=c;
			coun++;
		}
		if(coun==n-s)
		{
			printf("%lli\n",ans);
		}
		else
		{
			printf("impossible\n");
		}
	}
}
