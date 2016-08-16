#include"bits/stdc++.h"
using namespace std;
#define ll long long int
#define mod 1000000007
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll x,y,z,n,d,a,i;
		cin>>x>>y>>z;
		d=x*x-y*y;
		d=d/(5*x+5*y-2*z);
		//cout<<d<<" ";
		if(d==0)
		{
			n=z/x;
			cout<<n<<endl;
			for(i=1;i<=n;i++)
			{
				cout<<x<<" ";
				
			}
			cout<<endl;
			continue;
		}
		n=(y-x)/d+5;
		cout<<n<<endl;
		a=x-2*d;
		for(i=1;i<=n;i++)
		{
			cout<<(a+(i-1)*d)<<" ";
		}
		cout<<endl;
	}
}
