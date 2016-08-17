#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
#define pb push_back

int main()
{
	ll tt,n=1;
	scanf("%lli",&tt);
	while(tt--)
	{
		ll a,b;
		scanf("%lli%lli",&a,&b);
		b=b*b;
		double r=a*9.806,w,p;
		r=r/b;
		if(r>1) 
		{
			printf("Scenario #%lli: -1\n",n);
		}
		else
		{
			w=asin(r);
			w*=90;
			p=acos(-1);
			w=w/p;
			printf("Scenario #%lli: %.2lf\n",n,w);
		}
		n++;
	}
}
