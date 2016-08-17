#include"bits/stdc++.h"
using namespace std;
#define ll long long int
#define mod 1000000007
ll gcd(ll a, ll b)
{
	if(a==1 || b==1) return 1;
	if(a==0) return b;
	if(b==0) return a;
	if(a>b) return gcd(a%b,b);
	if(a<b) return gcd(b%a,a);
	
}
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll a,b,g;
		scanf("%lli%lli",&a,&b);
		g=gcd(a,b);
		cout<<(b/g)<<" "<<(a/g)<<endl;
	}
}
