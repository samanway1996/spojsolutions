#include"bits/stdc++.h"
using namespace std;
#define mod 1000000007
#define ll long long int
#define pb push_back
int main()
{
	ll o=0;
	while(1)
	{
		o++;
		ll n,s;
		cin>>n;
		if(n==0) break;
		if(n==1) 
		{
			s=1;
			cout<<"Case "<<o<<", N = "<<n<<", # of different labelings = "<<s<<endl;
			continue;
		}
		s=1;
		for(ll i=1;i<=n-2;i++)
		{
			s*=n;
		}
		cout<<"Case "<<o<<", N = "<<n<<", # of different labelings = "<<s<<endl;
	}
}
