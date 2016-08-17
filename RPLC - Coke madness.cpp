#include"bits/stdc++.h"
using namespace std;
#define ll long long int
#define mod 1000000007
#define pb push_back
int main()
{
	ll tt,u=1;
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
		ll m=0,s=0;
		for(i=0;i<n;i++)
		{
			s+=a[i];
			if(s<0)
			{
				m+=(0-s);
				s=0;
				
			}
		}
		printf("Scenario #%lli: %lli\n",u,m+1);
		u++;
	}
}
