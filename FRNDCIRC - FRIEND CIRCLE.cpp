#include"bits/stdc++.h"
using namespace std;
#define ll long long int
#define mod 1000000007
#define pb push_back
int main()
{
	ll tt;
	scanf("%lli",&tt);
	while(tt--)
	{
		ll n,k=0,i,j,u,v,ru,rv;
		scanf("%lli",&n);
		char ss1[1000],ss2[1000];
		string s[n][2];
		map<string,ll> mp;
		map<ll,ll> root,sz;
		
		for(i=0;i<n;i++)
		{
			scanf("%s%s",ss1,ss2);
			s[i][0]=string(ss1);
			s[i][1]=string(ss2);
			if(mp.count(s[i][0])==0)
			{
				k++;
				mp[s[i][0]]=k;
				root[k]=k;
				sz[k]=1;
			}
			if(mp.count(s[i][1])==0)
			{
				k++;
				mp[s[i][1]]=k;
				root[k]=k;
				sz[k]=1;
			}
		}
		for(i=0;i<n;i++)
		{
			u=mp[s[i][0]];
			v=mp[s[i][1]];
			j=u;
			while(root[j]!=j)
			{
				j=root[root[j]];
			}
			ru=j;
			j=v;
			while(root[j]!=j)
			{
				j=root[root[j]];
			}
			rv=j;
			if(ru==rv)
			{
				printf("%lli\n",sz[ru]);
			}
			else
			{
				if(sz[ru]<sz[rv])
				{
					root[ru]=root[rv];
					sz[rv]+=sz[ru];
					printf("%lli\n",sz[rv]);
				}
				else
				{
					root[rv]=root[ru];
					sz[ru]+=sz[rv];
					printf("%lli\n",sz[ru]);
				}
				
			}
		}
		
	}
}
