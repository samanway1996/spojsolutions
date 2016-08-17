#include"bits/stdc++.h"
using namespace std;
#define ll long long int
#define mod 1000000007
#define pb push_back

ll merge(ll a[],ll l,ll mid,ll r)
{
	ll i=l,j=mid,coun=0;
	ll size=r-l+1,k=0;
	ll data[size];
	while(i<=mid-1 && j<=r)
	{
		if(a[i]<a[j])
		{
			data[k]=a[i];
			k++;
			i++;
		}
		else
		{
			data[k]=a[j];
			k++;
			j++;
			coun+=mid-i;
		}
	}
	while(i<=mid-1)
	{
		data[k]=a[i];
			k++;
			i++;
	}
	while(j<=r)
	{
		data[k]=a[j];
			k++;
			j++;
	}
	k=0;
	while(l<=r)
	{
		a[l]=data[k];
		l++;
		k++;
	}
	return coun;
}

ll mgs(ll a[],ll l,ll r)
{
	ll s=0;
	if(l<r)
	{
		ll mid=(l+r)/2;
		s+=mgs(a,l,mid);
		s+=mgs(a,mid+1,r);
		s+=merge(a,l,mid+1,r);
	}
	return s;
	
}

ll mergesort(ll a[],ll n)
{
	return mgs(a,0,n-1);
}

int main()
{
	ll tt,n,i;
	scanf("%lli",&tt);
	while(tt--)
	{
		scanf("%lli",&n);
		string s1[n],s2[n];
		map<string,ll> mp;
		for(i=0;i<n;i++)
		{
			cin>>s1[i];
			
			mp[s1[i]]=i;
		}
		
		ll a[n];
		for(i=0;i<n;i++)
		{
			cin>>s2[i];
			a[i]=mp[s2[i]];
		}
//		for(i=0;i<n;i++)
//		{
//			cout<<s1[i]<<endl;
//		}
		
		ll ans=mergesort(a,n);
		printf("%lli\n",ans);
	}
}
