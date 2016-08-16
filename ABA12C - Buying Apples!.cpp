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
		ll n;
		ll k;
		scanf("%lli%lli",&n,&k);
		ll a[k+1],i,j;
		for(i=1;i<=k;i++)
		{
			scanf("%lli",&a[i]);
		}
		for(i=1;i<=k;i++)
		{
			for(j=1;j<i;j++)
			{
				if(a[j]==-1|| a[i-j]==-1)
				continue;
				if(a[i]==-1)
				{
					a[i]=a[j]+a[i-j];
					//cout<<i<<" 1 "<<a[j]<<endl;
				}
				else
				{
					a[i]=min(a[i],a[j]+a[i-j]);
					
					//cout<<i<<" 2 "<<j<<endl;
				}
			}
		}
		for(i=k;i<=k;i++)
		{
			cout<<a[i]<<endl;
		}
	}
}
