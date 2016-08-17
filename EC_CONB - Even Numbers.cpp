#include"bits/stdc++.h"
using namespace std;
#define ll long long int
#define mod 1000000007
#define pb push_back
int main()
{
	ll arr[60],ii,i;
	arr[0]=1;
	for(i=1;i<60;i++)
	{
		arr[i]=arr[i-1]*2;
		//cout<<arr[i]<<endl;
	}
	ll tt;
	scanf("%lli",&tt);
	ll a[tt];
	for(ii=0;ii<tt;ii++)
	{
		
		ll n;
		scanf("%lli",&n);
		if(n&1)
		{
			printf("%lli\n",n);
		}
		else
		{
			vector<ll> v;
			while(n!=0)
			{
				v.pb(n%2);
				n/=2;
			}
			ll s=0,j=0;
			for(i=v.size()-1;i>=0;i--)
			{
				s+=v[i]*arr[j];
				j++;
			}
			cout<<s<<endl;
		}
	}
}
