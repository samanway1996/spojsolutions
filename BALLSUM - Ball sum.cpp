#include"bits/stdc++.h"
using namespace std;
#define ll long long int
#define mod 1000000007
#define pb push_back

int main()
{
	while(1)
	{
		ll a,b;
		scanf("%lli%lli",&a,&b);
		if(a==-1) break;
		ll c=b/2-1;
		c=c*(c+1);
		if(b%2!=0)
		{
			c+=b/2;
		}
		ll d=a*(a-1);
		d/=2;
		ll g=__gcd(c,d);
		c=c/g;
		d=d/g;
		if(c==0)
		{
			printf("0\n");
			continue;
		}
		if(c==d)
		{
			printf("1\n");
			continue;
		}
		printf("%lli/%lli\n",c,d);
	}
}
