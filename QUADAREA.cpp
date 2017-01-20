#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		double a,b,c,d,s;
		scanf("%lf%lf%lf%lf",&a,&b,&c,&d);
		s=((a+b+c+d)*1.0)/2;
		s=sqrt((s-a)*(s-b)*(s-c)*(s-d));
		printf("%.2lf\n",s);
	}
}
