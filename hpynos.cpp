#include"bits/stdc++.h"
using namespace std;
#define ll long long int
#define d double
#define mod 1000000007
static ll coun=1;
set<ll> s;
void cal(ll n)
{
	s.insert(n);
	//cout<<s.size()<<endl;
	if(s.size()<coun)
	{
		cout<<"-1\n";
		return;
	}
	ll m=0,i;
	for(i=n;i!=0;i=i/10)
	{
		m+=(i%10)*(i%10);
	}
	if(m==1)
	{
		cout<<coun<<endl;
		return;
	}
	coun++;
	cal(m);
}
int main()
{
	ll n;
	scanf("%lli",&n);
	cal(n);
}
