#include"bits/stdc++.h"
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007
int main()
{
	ll tt;
	scanf("%lli",&tt);
	while(tt--)
	{
		ll n;
		scanf("%lli",&n);
		char a[50];
		cin>>a;
		ll aa=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0;
		for(ll i=0;i<38;i++)
		{
			if(a[i]=='T'  && a[i+1]=='T' && a[i+2]=='T' )
			{
				aa++;
			}
			if(a[i]=='T'  && a[i+1]=='T' && a[i+2]=='H' )
			{
				b++;
			}
			if(a[i]=='T'  && a[i+1]=='H' && a[i+2]=='T' )
			{
				c++;
			}
			if(a[i]=='T'  && a[i+1]=='H' && a[i+2]=='H' )
			{
				d++;
			}
			if(a[i]=='H'  && a[i+1]=='T' && a[i+2]=='T' )
			{
				e++;
			}
			if(a[i]=='H'  && a[i+1]=='T' && a[i+2]=='H' )
			{
				f++;
			}
			if(a[i]=='H'  && a[i+1]=='H' && a[i+2]=='T' )
			{
				g++;
			}
			if(a[i]=='H'  && a[i+1]=='H' && a[i+2]=='H' )
			{
				h++;
			}
			//cout<<n<<" "<<aa<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<" "<<f<<" "<<g<<" "<<h<<endl;
		}
		cout<<n<<" "<<aa<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<" "<<f<<" "<<g<<" "<<h<<endl;
	}
}
