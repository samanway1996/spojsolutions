#include"bits/stdc++.h"
using namespace std;
#define ll long long int
#define mod 1000000007
#define pb push_back
 
int main()
{
	ll tt,t=1;
	scanf("%lli",&tt);
	while(tt--)
	{
		ll a,b,c,k,m=0,i;
		scanf("%lli%lli%lli",&a,&b,&c);
		k=__gcd(a,b);
		if(c%k==0) m=1;
		if(m==1) 
		{
			printf("Case %lli: Yes\n",t);
		}
		else 
		{
			printf("Case %lli: No\n",t);
		}
		t++;
	}
}
