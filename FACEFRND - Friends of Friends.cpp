#include"bits/stdc++.h"
using namespace std;
#define ll long long int
#define mod 1000000007
int main()
{
	ll n,nn;
	cin>>n;
	nn=n;
	set<ll> m;
	while(n--)
	{
		ll id;
		cin>>id;
		m.insert(id);
		ll size;
		cin>>size;
		while(size--)
		{
			cin>>id;
			m.insert(id);
		}
	}
	set<ll> :: iterator p;
	
	/*for(p=m.begin();p!=m.end();++p)
	{
		cout<<*p<<" ";
	}*/
	cout<<m.size()-nn;
}
