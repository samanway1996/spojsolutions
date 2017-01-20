#include"bits/stdc++.h"
using namespace std;
#define ll long long int
#define mod 1000000007
#define pb push_back
int main()
{
	ll n,m;
	while(1)
	{
		scanf("%lli%lli",&n,&m);
		if(n==0) break;
		ll g=__gcd(n,m);
		ll l=n*m;
		l/=g;
		ll p=l/n;
		p*=l/m;
		printf("%lli\n",p);
	}
} 
