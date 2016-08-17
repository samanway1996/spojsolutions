#include"bits/stdc++.h"
using namespace std;
#define ll long long int
#define mod 1000000007
#define pb push_back
int main()
{
	ll tt;
	scanf("%lli",&tt);
	double a=acos(-1);
	while(tt--)
	{
		ll n;
		scanf("%lli",&n);
		if(n==1 || n==0)
		{
			printf("1\n");
			continue;
		}
		double b=2*a*n,c=log(b)/2,d=n*(log(n)-1),e=(c+d)/log(10)+1;
		ll k=e;
		printf("%lli\n",k);
		
		
	}
}
