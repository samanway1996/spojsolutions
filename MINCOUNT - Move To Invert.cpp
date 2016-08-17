#include"bits/stdc++.h"
using namespace std;
#define ll long long int
#define mod 1000000007
#define pb push_back
int main()

{
	ll tt;
	scanf("%lli",&tt);
	while(tt--)
	{
		ll n,m,a,b;
		scanf("%lli",&n);
		if(n==0) cout<<"0\n";
		else if(n==1) cout<<"0\n";
		else if(n==2) cout<<"1\n";
		
		else
		{
			m=n/3;
			if(n%3==0)
			{
				b=m*(m+1);
				a=(m-1)*m;
				
			}
			if(n%3==1)
			{
				b=m*(m+1);
				a=m*(m+1);
			}
			if(n%3==2)
			{
				b=m*(m+1);
				a=(m+1)*(m+2);
			}
			a=a/2+b;
			printf("%lli\n",a);
		}
	}
}
