#include"bits/stdc++.h"
using namespace std;
#define ll long long int
#define mod 1000000007
#define pb push_back

int main()
{
	ll a,b,c,d,t=1,r,tw,y,yy;
	while(cin>>a)
	{
		cin>>b>>c>>d;
		ll e[4];
		e[0]=a;
		e[1]=b;
		e[2]=c;
		e[3]=d;
		sort(e,e+4);
		r=e[2]+e[3];
		tw=e[0]+e[3];
		y=e[1]+e[2];
		yy=max(tw,y);
		ll m=max(r,yy);
		printf("Case %lli: %lli\n",t,r);
		t++;
	}
}
