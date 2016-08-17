#include"bits/stdc++.h"
using namespace std;
#define ll long long int
#define mod 1000000007
ll hash[1000007];
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll a,b;
		scanf("%lli%lli",&a,&b);
		if(b>=a)
		{
			if(a%2==0) cout<<"L\n";
			else cout<<"R\n";
		}
		else
		{
			if(b%2==0) cout<<"U\n";
			else cout<<"D\n";
		}
	}
}
