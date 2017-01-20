#include"bits/stdc++.h"
using namespace std;
#define ll long long int
#define mod 1000000007
int main()
{
	ll n;
	cin>>n;
	while(n--)
	{
		ll m,s;
		cin>>m;
		char c;
		while(1)
		{
			cin>>c;
			if(c=='=') 
			{
				cout<<m<<endl;
				break;
			}
			cin>>s;
			if(c=='+') m+=s;
			else if(c=='-') m-=s;
			else if(c=='*') m*=s;
			else if(c=='/') m/=s;
			else m%=s;
			
		}
		
	}
}
