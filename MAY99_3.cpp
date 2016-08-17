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
		ll x,y,z;
		scanf("%lli%lli%lli",&x,&y,&z);
		ll g=__gcd(x,y);
		if(z>max(x,y))
		{
			cout<<"NO\n";
		}
		else
		{
			if(z%g==0)
			{
				cout<<"YES\n";
			}
			else
				cout<<"NO\n";
		}
	}
}
