#include"bits/stdc++.h"
using namespace std;
#define ll long long int
#define mod 1000000007
#define pb push_back
int main()
{
	ll n,q,a,b,i,j,mx=1,mn=1,mns,r1,r2;
	scanf("%lli%lli",&n,&q);
	ll root[n+1],size[n+1];
	for(i=1;i<=n;i++)
	{
		root[i]=i;
		size[i]=1;
	}
	mns=n;
	map<ll,ll> mp;
	map<ll,ll>:: iterator it;
	mp[1]=n;
	while(q--)
	{
		scanf("%lli%lli",&a,&b);
		i=a;
		while(i!=root[i])
		{
			i=root[root[i]];
		}
		r1=i;
		i=b;
		while(i!=root[i])
		{
			i=root[root[i]];
		}
		r2=i;
		if(r1==r2)
		{
			printf("%lli\n",mx-mn);
			continue;
			
		}
		else
		{
			if(size[r1]<size[r2])
			{
				mp[size[r1]]--;
				mp[size[r2]]--;
				if(mp[size[r1]]==0) mp.erase(size[r1]);
				if(mp[size[r2]]==0) mp.erase(size[r2]);
				root[r1]=root[r2];
				size[r2]+=size[r1];
				mp[size[r2]]++;
				
				if(size[r2]>mx) mx=size[r2];
				it=mp.begin();
				mn=it->first;
			}
			else
			{
				mp[size[r1]]--;
				mp[size[r2]]--;
				if(mp[size[r1]]==0) mp.erase(size[r1]);
				if(mp[size[r2]]==0) mp.erase(size[r2]);
				root[r2]=root[r1];
				size[r1]+=size[r2];
				mp[size[r1]]++;
				
				if(size[r1]>mx) mx=size[r1];
				it=mp.begin();
				mn=it->first;
			}
			printf("%lli\n",mx-mn);
		}
	}
}
