#include"bits/stdc++.h"
using namespace std;
#define pb push_back
#define mod 1000000007
#define ll long long int
int main()
{
	ll n;
	while(scanf("%lli",&n)!=EOF)
	{
		string s1,s2,s;
		ll i;
		cin>>s1>>s2;
		s=s1+"&"+s2;
		ll ln=s.length(),l,r;
		l=0;
		r=0;
		ll z[ln];
		z[0]=0;
		for(i=1;i<ln;i++)
		{
			if(i>r)
			{
				l=r=i;
				while(r<ln && (s[r]==s[r-l]))
				{
					r++;
				}
				z[i]=r-l;
				r--;
			}
			else
			{
				ll a=i-l;
				ll b=r-i+1;
				if(z[a]<b)
				{
					z[i]=z[a];
				}
				else
				{
					l=i;
					while(r<ln && (s[r]==s[r-l]))
					{
						r++;
					}
					z[i]=r-l;
					r--;
				}
			}
		}
		ll mode=0;
		for(i=0;i<ln;i++)
		{
			if(z[i]==s1.length())
			{
				mode=1;
				cout<<(i-s1.length()-1)<<endl;
			}
		}
		if(mode==0)
		cout<<endl;
	}
} 
