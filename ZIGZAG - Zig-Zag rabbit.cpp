#include"bits/stdc++.h"
using namespace std;
#define ll unsigned long long int
#define mod 1000000007
#define pb push_back
ll sm=1,n;
ll ans(ll x,ll y)
{
	ll u=x+y,v,f=n*n,uu;
	if(u<=n-1)
	{
		v=(u*(u+1))/2+1;
		if(u%2==0)
		{
			return (v+y);
		}
		else
		{
			return (v+x);
		}
	}
	else
	{
		uu=2*n-2-u;
		v=(uu*(uu+1))/2;
		v=f-v;
		
		if(u%2==0)
		{
			return (v-n+1+y);
		}
		else
		{
			return (v-n+1+x);
		}
		
	}
}
int main()
{
	ll k,i,x,y;
	scanf("%lli%lli",&n,&k);
	string s;
	cin>>s;
	ll l=s.length();
	x=0;
	y=0;
	for(i=0;i<l;i++)
	{
		if(s[i]=='D')
		{
			x++;
		}
		if(s[i]=='U')
		{
			x--;
		}
		if(s[i]=='L')
		{
			y--;
		}
		if(s[i]=='R')
		{
			y++;
		}
		sm+=ans(x,y);
		//cout<<ans(x,y)<<endl;
	}
	printf("%lli",sm);
}
