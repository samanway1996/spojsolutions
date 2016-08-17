#include"bits/stdc++.h"
using namespace std;
#define ll long long int
#define mod 1000000007
#define pb push_back

int main()
{
	int tt,i,h,p,a,y,o;
	ll c,x,g;
	float r;
	scanf("%d",&tt);
	while(tt--)
	{
		scanf("%d%d%d",&h,&p,&a);
		if(h<=p)
		{
			printf("1\n");
			continue;
		}
		o=2*a-p;
		c=o*o;
		y=8*(h-a);
		x=p*y;
		c+=x;
		r=sqrt(c);
		r+=o;
		g=ceil(r/(2*p));
		g=2*g-1;
		printf("%lli\n",g);
	}
}
