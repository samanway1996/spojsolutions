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
		ll a,b,mode;
		scanf("%lli%lli",&a,&b);
		ll c,d,cc;
		c=a;
		d=b;
		if(c<d)
		{
			cc=c;
			c=d;
			d=cc;
		}
		if(a*b<0) mode=1;
		else mode=0;
		a=abs(a);
		b=abs(b);
		ll g=__gcd(a,b);
		
		if(mode==0)
		{
			printf("%lli\n",(c-d)/g);
		}
		else printf("%lli\n",(c-d)/g);
	}
}
