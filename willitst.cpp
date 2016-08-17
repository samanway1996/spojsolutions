#include"bits/stdc++.h"
using namespace std;
#define ll long long int
#define mod 1000000007
ll pow(ll a,ll b,ll m)
{
	if(b==0) return 1;
	ll temp=pow(a,b/2,m);
	if(!(b&1)) 
	{
		return ((temp%m)*(temp%m))%m;
	}
	else
	{
		return ((((temp%m)*(temp%m))%m)*(a%m))%m;
	}
}
int main()
{
	ll n,mo=0;
	cin>>n;
	ll arr[60],i;
	arr[0]=1;
	for(i=1;i<60;i++)
	{
		arr[i]=arr[i-1]*2;
		//cout<<arr[i]<<endl;
	}
	for(i=1;i<60;i++)
	{
		if(arr[i]==n)
		{
			mo=1;
			break;
		}
	}
	if(n==0 || n==1) mo=1;
	if(mo==1) cout<<"TAK\n";
	else cout<<"NIE\n";
}
