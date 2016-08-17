#include"bits/stdc++.h"
using namespace std;
#define ll long long int
#define mod 1000000007
ll gcd(ll n,ll s)
{
	if(n==0) return s;
	if(s==0) return n;
	if(n==1 || s==1) return 1;
	if(n>s) return gcd(n%s,s);
	else if(n<s) return gcd(s%n,n);
	else return s;
}
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n,i;
		cin>>n;
		char a[270];
		cin>>a;
		//cout<<n<<" "<<a<<endl;
		if(n==0)
		{
			cout<<a<<endl;
			continue;
		}
		ll s=0,l=strlen(a);
		for(i=0;i<l;i++)
		{
			//cout<<a[i]<<" ";
			s=s*10;
			s%=n;
			s+=a[i]-'0';
			s%=n;
		}
		ll g=gcd(n,s);
		cout<<g<<endl;
	}
}
