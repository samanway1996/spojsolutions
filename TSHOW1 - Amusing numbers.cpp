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
		vector<ll> v;
		n++;
		while(n!=0)
		{
			v.pb(n);
			n/=2;
		}
		ll sz=v.size()-1;
		char e[1000000];
		ll j=0,i;
		for(i=sz;i>=0;i--)
		{
			if(v[i]==1) continue;
			if(v[i]==v[i+1]*2) 
			{
				e[j]='5';
				j++;
			}
			else
			{
				e[j]='6';
				j++;
			}
		}
		e[j]='\0';
		printf("%s\n",e);
	}
}
