#include"bits/stdc++.h"
using namespace std;
#define ll long long int
#define mod 1000000007
#define pb push_back

int main()
{
	ll tt;
	cin>>tt;
	while(tt--)
	{
		ll n,k,i;
		cin>>n>>k;
		ll a[n],b[n];
		a[n-1]=k;
		for(i=n-2;i>=0;i--)
		{
			if(a[i+1]%2==0) a[i]=a[i+1]/2;
			else a[i]=a[i+1]/2+1;
		}
		b[0]=0;
		for(i=1;i<n;i++)
		{
			if(a[i]==2*a[i-1])
			{
				if(b[i-1]==0) b[i]=1;
				else b[i]=0;
			}
			else
			{
				if(b[i-1]==0) b[i]=0;
				else b[i]=1;
			}
		}
		if(b[n-1]==0) cout<<"Male\n";
		else cout<<"Female\n";
	}
}
