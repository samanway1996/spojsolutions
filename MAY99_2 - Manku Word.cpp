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
			if(n%5==0 || n%5==1)
			n=n/5;
			else n=n/5+1;
		}
		ll sz=v.size()-1;
		char e[1000000];
		ll j=0,i;
		for(i=sz;i>=0;i--)
		{
			if(v[i]==1) continue;
			if(v[i]==v[i+1]*5-3) 
			{
				e[j]='m';
				j++;
			}
			else if(v[i]==v[i+1]*5-2)
			{
				e[j]='a';
				j++;
			}
			else if(v[i]==v[i+1]*5-1)
			{
				e[j]='n';
				j++;
			}
			else if(v[i]==v[i+1]*5)
			{
				e[j]='k';
				j++;
			}
			else if(v[i]==v[i+1]*5+1)
			{
				e[j]='u';
				j++;
			}
			
		}
		e[j]='\0';
		printf("%s\n",e);
	}
}
