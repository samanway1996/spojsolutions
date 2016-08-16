#include"bits/stdc++.h"
using namespace std;
#define ll long long int
#define mod 1000000007
#define pb push_back

int main()
{
	ll tt;
	scanf("%lli",&tt);
	while(tt--)
	{
		ll m,n;
		scanf("%lli%lli",&m,&n);
		ll a[m-1],b[n-1],i,j;
		for(i=0;i<m-1;i++)
		{
			scanf("%lli",&a[i]);
		}
		for(i=0;i<n-1;i++)
		{
			scanf("%lli",&b[i]);
		}
		sort(a,a+m-1);
		sort(b,b+n-1);
		i=m-2,j=n-2;
		ll aa=1,bb=1,s=0;
		while(i>=0 && j>=0)
		{
			if(a[i]>=b[j])
			{
				s+=a[i]*aa;
				bb++;
				i--;
			}
			else
			{
				s+=b[j]*bb;
				aa++;
				j--;
			}
		}
		while(i>=0)
		{
			s+=a[i]*aa;
			bb++;
			i--;
		}
		
		while(j>=0)
		{
			s+=b[j]*bb;
			aa++;
			j--;
		}
		
		printf("%lli\n",s);
	}
}
