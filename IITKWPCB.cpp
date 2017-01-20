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
		ll i,k=n/2;
		for(i=k;i>=1;i--)
		{
			if(__gcd(n,i)==1)
			{
				break;
			}
		}
		printf("%lli\n",i);
	}
}
