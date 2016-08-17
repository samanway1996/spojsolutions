#include"bits/stdc++.h"
using namespace std;
#define ll long long int
#define mod 1000000007
#define pb push_back
int main()
{
	set<pair<ll,ll> > s;
	s.insert( pair<ll,ll> (0,0));
	s.insert( pair<ll,ll> (0,67));
	s.insert( pair<ll,ll> (1,0));
	s.insert( pair<ll,ll> (1,3));
	set<pair<ll,ll> > :: iterator it;
	for(it=s.begin();it!=s.end(); ++it)
	{
		cout<<it->first<<" "<<it->second<<endl;
	}
}
