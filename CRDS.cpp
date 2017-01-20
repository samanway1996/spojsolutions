#include"bits/stdc++.h"
using namespace std;
#define ll long long int
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		ll ans=(n*(n-1))/2;
		ans*=3;
		ans+=2*n;
		cout<<ans%1000007<<endl;
	}
}
