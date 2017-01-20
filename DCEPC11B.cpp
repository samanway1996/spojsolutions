#include"bits/stdc++.h"
using namespace std;
#define ll long long int
#define mod 1000000007
ll pow(ll a,ll b,ll m)
{
	/*if(y==0) return 1;
	ll temp=pow(x,y/2);
	if(y%2==0)
	{
		return ((temp%m)*(temp%m))%m;
	}
	else
	{
		return ((((temp%m)*(temp%m))%m)*(x%m))%m;
	}*/
	ll x=1,y=a;
 while(b>0)
 {
  if(b & 1)
   x=(x*y)%m;
  y=(y*y)%m;
  b>>=1;
 }
 return x;
}
int main()
{
	//cout<<pow(3,5,1000000007);
	ll t,i;
	cin>>t;
	while(t--)
	{
		ll n,p;
		scanf("%lli%lli",&n,&p);
		if(p<=n)
		{
			printf("0\n");continue;
		}
		ll ans=-1;
		for(i=n+1;i<p;i++)
		{
			ans*=pow(i,p-2,p);
			ans%=p;
		}
		//ans*=(p-1);
		//ans%=p;
		printf("%lli\n",p+ans);
	}
}
