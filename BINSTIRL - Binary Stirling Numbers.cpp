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
		ll m,n;
		scanf("%lli%lli",&m,&n);
		ll f=((m-n)&((n-1)>>1));
		f=!(f);
		printf("%lli\n",f);
	}
}
