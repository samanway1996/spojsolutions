#include"bits/stdc++.h"
using namespace std;
#define ll long long int
#define mod 1000000007
#define pb push_back
int main()
{
	string s;
	ll t=1;
	while(cin>>s)
	{
		ll l=s.length(),i,c=0;
		for(i=l-1;i>=0;i--)
		{
			if(s[i]=='1')
			{
				if(i==l-1) c++;
				else c+=2;
			}
			
		}
		ll loc=-1,v=0;
		for(i=0;i<l;i++)
		{
			if(s[i]=='1')
			{
				loc=i;
				break;
			}
		}
		if(loc==-1) v=0;
		else
		for(i=loc+1;i<l;i++)
		{
			if(s[i]!=s[i-1]) v++;
		}
		cout<<"Game #"<<t<<": "<<min(v+1,c)<<"\n";
		t++;
	}
}
