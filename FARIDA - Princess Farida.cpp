#include"bits/stdc++.h"
using namespace std;
#define ll long long int
#define mod 1000000007
#define pb push_back

int main()
{
	ll tt,k=1;
	scanf("%lli",&tt);
	while(tt--)
	{
		ll n;
		scanf("%lli",&n);
		if(n==0)
		{
			cout<<"Case "<<k<<": 0\n";
			k++;
			continue;
		}
		ll a[n][3],i;
		for(i=0;i<n;i++)
		{
			scanf("%lli",&a[i][0]);
		}
		a[0][1]=a[0][0];
		a[0][2]=0;
		for(i=1;i<n;i++)
		{
			a[i][2]=max(a[i-1][1],a[i-1][2]);
			a[i][1]=a[i-1][2]+a[i][0];
		}
		printf("Case %lli: %lli\n",k,max(a[n-1][1],a[n-1][2]));
		k++;
	}
}
