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
		ll n,m;
		scanf("%lli%lli",&n,&m);
		ll a[m],i,j,s=0,g=-1,mm=0;
		for(i=0;i<m;i++)
		{
			scanf("%lli",&a[i]);
			if(a[i]==0) 
			{
				mm=1;
				continue;
			}
			if(g==-1) g=a[i];
			
			else g=__gcd(g,a[i]);
			
		}
		if(m>n) 
		{
			cout<<"NO\n";
			continue;
		}
		
		if(g==-1)
		{
			if(n<m) cout<<"NO\n";
			else cout<<"YES\n";
			continue;
		}
		if(mm==1)
		{
			printf("NO\n");
			continue;
		}
		for(i=0;i<m;i++)
		{
			s+=a[i]/g;
		}
		
		if(n!=0 && n%s==0)
		{
			printf("YES\n");
		}
		else
		{
			printf("NO\n");
		}
	}
}
