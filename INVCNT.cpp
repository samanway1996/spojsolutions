#include"bits/stdc++.h"
using namespace std;
#define ll long long int
#define mod 1000000007
#define pb push_back
 
ll mrge(ll a[],ll l,ll m,ll r)
{
	ll ln=(r-l+1),i,j,k,coun=0;
	ll arr[ln];
	i=l;j=m;
	k=0;
	while(i<=m-1 && j<=r)
	{
		if(a[i]<a[j])
		{
			arr[k]=a[i];
			k++;
			i++;
		}
		else
		{
			arr[k]=a[j];
			k++;
			j++;
			coun+=m-i;
		}
	}
	while(i<=m-1)
	{
		arr[k]=a[i];
		k++;
		i++;
	}
	while(j<=r)
	{
		arr[k]=a[j];
		k++;
		j++;
	}
	i=0;
	while(l<=r)
	{
		a[l]=arr[i];
		l++;
		i++;
	}
	return coun;
}
 
ll mrgesort(ll a[],ll l,ll r)
{
	ll m=(l+r)/2,coun=0;
	if(l<r)
	{
		coun+=mrgesort(a,l,m);
		coun+=mrgesort(a,m+1,r);
		coun+=mrge(a,l,m+1,r);
	}
	return coun;
}
 
ll invcnt(ll a[],ll n)
{
	return mrgesort(a,0,n-1);
}
 
int main()
{
	ll tt;
	scanf("%lli",&tt);
	while(tt--)
	{
		ll n;
		scanf("%lli",&n);
		ll a[n],i;
		for(i=0;i<n;i++)
		{
			scanf("%lli",&a[i]);
		}
		ll c=invcnt(a,n);
//		for(i=0;i<n;i++)
//		{
//			cout<<a[i]<<" ";
//		}
//		cout<<endl<<endl;
		cout<<c<<endl;
		
	}
}
