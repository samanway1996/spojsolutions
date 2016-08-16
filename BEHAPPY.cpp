#include"bits/stdc++.h"
using namespace std;
#define ll long long int
#define mod 1000000007
#define pb push_back
ll a[21][2];
ll ans(ll n,ll m)
{
	if(n<a[m][0])
	{
		return 0;
	}
	if(m==0)
	{
		if(n>a[m][1])
		return 0;
		else return 1;
	}
	ll s=0;
	for(ll i=a[m][0];i<=a[m][1];i++)
	{
		s+=ans(n-i,m-1);
	}
	return s;
}
int main()
{
	ll m,n,i;
	while(1)
	{
		scanf("%lli%lli",&m,&n);
		if(m==0 && n==0) break;
		for(i=0;i<m;i++)
		{
			scanf("%lli%lli",&a[i][0],&a[i][1]);
		}
		printf("%lli\n",ans(n,m-1));
	}
}
