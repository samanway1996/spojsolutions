#include"bits/stdc++.h"
using namespace std;
#define ll long long int
#define mod 1000000007
#define pb push_back
 
int main()
{
	ll tt,ttt=1;
	scanf("%lli",&tt);
	tt++;
	while(tt--)
	{
		
		char s[100000];
		cin.getline(s,100000);
		//cout<<ttt<<endl;
		if(ttt==1) 
		{
			ttt++;
			continue;
		}
		else ttt++;
		ll l=strlen(s);
		//cout<<l<<endl;
		char e[100000];
		ll j=0,i;
		set<string> st;
		for(i=0;i<l;i++)
		{
			if(s[i]!=' ')
			{
				e[j]=s[i];
				j++;
			}
			else
			{
				if(j==0) continue;
				e[j]='\0';
				j=0;
				st.insert(e);
				
				//cout<<e<<endl;
			}
			//cout<<"ok\n";
		}
		if(j!=0)
		{
			e[j]='\0';
			j=0;
			st.insert(e);
		}
		
		//cout<<e<<endl;
		ll r=st.size();
		cout<<r<<endl;
		
	}
}
