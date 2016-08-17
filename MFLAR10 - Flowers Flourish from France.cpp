#include"bits/stdc++.h"
using namespace std;
#define ll long long int
#define mod 1000000007
#define pb push_back
int main()
{
	while(1)
	{
		char s[1000000];
		cin.getline(s,1000000);
		ll l=strlen(s),i;
		vector<char> v;
		if(s[0]=='*')
		{
			break;
		}
		if(s[0]!=' ')
		{
			v.pb(s[0]);
		}
		for(i=0;i<l-1;i++)
		{
			if(s[i]==' ')
			{
				v.pb(s[i+1]);
			}
		}
		ll sz=v.size(),m=0;
		char e=v[0];
		for(i=1;i<sz;i++)
		{
			if(abs(v[i]-e)==0 ||abs(v[i]-e)==32)
			{
				continue;
			}
			else
			{
				m=1;
				break;
			}
		}
		if(m==0) printf("Y\n");
		else printf("N\n");
		//cout<<s<<endl;
	}
}
