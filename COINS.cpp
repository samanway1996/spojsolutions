#include"bits/stdc++.h"
using namespace std;
#define ll long long int
#define mod 1000000007
ll arr[1000004];
void fill()
{
	ll i;
	arr[0]=0;
	arr[1]=1;
	arr[2]=2;
	arr[3]=3;
	for(i=4;i<1000004;i++)
	{
		arr[i]=max(i,(arr[i/2]+arr[i/3]+arr[i/4]));
	}
}
ll ans(ll n)
{
	if(n<1000000) return arr[n];
	else
	return max(n,(ans(n/2)+ans(n/3)+ans(n/4)));
}
int main()
{
	ll n;
	fill();
	while(scanf("%lli",&n)!=EOF)
	{
		printf("%lli\n",ans(n));
	}
}
