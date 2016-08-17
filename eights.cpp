#include"bits/stdc++.h"
using namespace std;
#define ll long long int
#define mod 1000000007
int main()
{
	ll  i;
	vector<ll> v;
	for(i=0;i<10000;i++)
	{
		ll l=i*i*i;
		if(l%1000==888) v.push_back(i);
		
	}
	ll n;
	cin>>n;
	while(n--)
	{
		ll m;
		scanf("%lli",&m);
		ll o=(m/2);
		if(m%2==0)
		{
			cout<<1+o*5-2<<"42"<<endl;
		}
		else
		{
			cout<<1+o*5<<"92"<<"\n";
		}
		//cout<<v[m-1]<<endl;
	}
	
}
