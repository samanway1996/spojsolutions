#include"bits/stdc++.h"
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007

int main()
{
	ll n,m,i,j;
	cin>>n;
	ll a[n][2];
	map<ll,ll> mp,mp1;
	
	for(i=0;i<n;i++)
	{
		cin>>a[i][0]>>a[i][1];
		mp[a[i][0]]++;
		mp1[a[i][1]]++;
	}
	if(n%2==0) n/=2;
	else n=n/2+1;
	map<ll,ll> :: iterator it;
	ll mn=100000000,mode=0;
	for(it=mp.begin();it!=mp.end();it++)
	{
		if(it->second>=n)
		{
			mode=1;
		}
	}
	if(mode==1)
	{
		cout<<"0\n";
		return 0;
	}
	for(it=mp.begin();it!=mp.end();it++)
	{
		if(it->second+mp1[it->first]>=n)
		{
			mn=min(mn,n-it->second);
		}
	}
	for(it=mp1.begin();it!=mp1.end();it++)
	{
		if(it->second+mp[it->first]>=n)
		{
			mn=min(mn,n-mp[it->first]);
		}
	}
	if(mn==100000000) cout<<"Impossible";
	else if(mn<0) cout<<"0";
	else cout<<mn<<endl;
}
