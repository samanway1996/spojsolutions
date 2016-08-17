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
		string s;
		cin>>s;
		ll l=s.length(),i;
		ll a=0,b=0,m=0;
		for(i=0;i<l;i++)
		{
			if(s[i]=='.') 
			{
				m=1;
				continue;
			}
			if(m==0)
			{
				a*=10;
				a+=s[i]-'0';
			}
			else
			{
				a*=10;
				a+=s[i]-'0';
				b++;
			}
			//cout<<b<<endl;
		}
		
		b=pow(10,b);
		//cout<<a<<" "<<b<<endl;
		ll g=__gcd(b,a);
		b=b/g;
		printf("%lli\n",b);
	}
}
