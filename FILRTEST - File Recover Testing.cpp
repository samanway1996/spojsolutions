#include"bits/stdc++.h"
using namespace std;
#define pb push_back
#define mod 1000000007
#define ll long long int
int main()
{
	
	while(1)
	{
		ll n;
		cin>>n;
		string s1,s2,s;
		ll i;
		cin>>s1;
		if(n==-1) break;
		s=s1;
		ll ln=s.length(),l,r;
		if(n<ln)
		{
			cout<<"0\n";
			continue;
		}
		if(n==ln)
		{
			cout<<"1\n";
			continue;
		}
		l=0;
		r=0;
		ll z[ln];
		z[0]=1;
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
		ll var=0;
		if(i>=1)
		{
			if(z[1]==ln-1)
			z[0]=ln;
		}
		for(i=0;i<ln;i++)
		{
			//cout<<z[i]<<" ";
			if(z[i]==ln-i)
			{
				var=z[i];
				break;
			}
		}
		//cout<<var<<endl;
		ll ln2=ln-var;
		if(ln2!=0)
		{
			if(n%ln2>=var) cout<<n/ln2<<endl;
			else cout<<n/ln2-1<<endl;
		}
		else
		cout<<(n-ln+1)<<endl;
	}
}
