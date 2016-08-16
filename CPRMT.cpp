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
	scanf("%lli",&t);
	while(t--)
	{
		ll m,n,k;
		scanf("%lli%lli%lli",&n,&m,&k);
		if(abs(n-m)>=k)
		{
			printf("%lli\n",abs(n-m)-k);
		}
		else
		{
			k=k-abs(n-m);
			if(k%2==0) cout<<"0\n";
			else cout<<"0\n";
		}
	}
}
