#include"bits/stdc++.h"
using namespace std;
#define ll long long int
#define mod 1000000007
#define pb push_back
#define infi 1<<29

int main()
{
	string s;
	while(cin>>s)
	{
		ll l=s.length();
		ll a=0,b=0,c=0,d=0,i;
		for(i=0;i<l;i+=2)
		{
			if(s[i]<='Z' && s[i]>='A') a++;
			else b++;
		}
		for(i=1;i<l;i+=2)
		{
			if(s[i]<='Z' && s[i]>='A') c++;
			else d++;
		}
		ll k=min(a+d,b+c);
		cout<<k<<endl;
	}
}
