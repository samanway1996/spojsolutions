#include"bits/stdc++.h"
using namespace std;
#define ll long long int
#define mod 1000000007
#define pb push_back
int main()
{
	ll kk=0,i;
	while(1)
	{
		kk++;
		string s;
		cin>>s;
		ll l=s.length();
		if(s[0]=='-') break;
		ll c=0,coun=0;
		for(ll i=0;i<l;i++)
		{
			if(s[i]=='{')
			{
				c++;
			}
			else if(c==0 && s[i]=='}')
			{
				c++;
				coun++;
			}
			else c--;
		}
		printf("%lli. %lli\n",kk,c/2+coun);
	}
}
