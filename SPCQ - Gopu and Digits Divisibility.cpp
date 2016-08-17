#include"bits/stdc++.h"
using namespace std;
#define ll long long int
#define pb push_back
#define mod 10000007
int main()
{
	ll t;
	scanf("%lli",&t);
	while(t--)
	{
		ll n,i;
		scanf("%lli",&n);
		while(1)
		{
			ll m=n;
			ll s=0;
			for(i=m;i!=0;i=i/10)
			{
				s+=i%10;
			}
			if(n%s==0)
			{
				printf("%lli\n",n);
				break;
			}
			n++;
			
		}
	}
}
