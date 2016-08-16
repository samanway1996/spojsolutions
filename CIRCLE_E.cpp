#include"bits/stdc++.h"
using namespace std;
#define ll long long int
int main()
{
	ll tt;
	scanf("%lli",&tt);
	while(tt--)
	{
		ll a,b,c;
		scanf("%lli%lli%lli",&a,&b,&c);
		ll f=a,g,h,g1,g2;
		
		g=a*b;
		g1=b*c;
		g2=c*a;
		g+=g1;
		g+=g2;
		h=a+b+c;
		h*=f;
		double i=sqrt(h),j=sqrt(c),k=sqrt(b);
		i*=2.0;
		i*=j;
		i*=k;
		i+=g;
		i=f/i;
		i*=c;
		i*=b;
		printf("%.6lf\n",i);
	}
}
