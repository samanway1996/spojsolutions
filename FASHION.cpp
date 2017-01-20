#include"bits/stdc++.h"
using namespace std;
#define ll long long int
int main()
{
	ll tt;
	cin>>tt;
	while(tt--)
	{
		ll n;
		cin>>n;
		ll a[n],b[n],i;
		// ll n;
		// cin>>n;
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		for(i=0;i<n;i++)
		{
			cin>>b[i];
		}
		sort(a,a+n);
		sort(b,b+n);
		ll s=0;
		for(i=0;i<n;i++)
		{
			s+=a[i]*b[i];
		}
		cout<<s<<endl;
		
	}
}
