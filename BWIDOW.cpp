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
		scanf("%lli",&n);
		ll a[n][2],i;
		for(i=0;i<n;i++)
		{
			scanf("%lli%lli",&a[i][0],&a[i][1]);
		}
		ll	m=0,c=0,l,ln;
		for(i=0;i<n;i++)
		{
			if(a[i][1]>m)
			{
				m=a[i][1];
			}
		}
		ll mn=0;
		for(i=0;i<n;i++)
		{
			if(a[i][1]==m)
			{
				c++;
				l=i;
				
			}
			if(a[i][1]>mn &&a[i][1]!=m)
			{
				mn=a[i][1];
				ln=i;
			}
		}	
		if(c>1)
		{
			printf("-1\n");
			continue;
		}
		if(a[l][0]>mn)
		{
			printf("%lli\n",l+1);
		}
		else printf("-1\n");
	}
}
