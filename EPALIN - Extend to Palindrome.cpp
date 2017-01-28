#include"bits/stdc++.h"
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007

int main()
{
	string s;
	while(cin>>s)
	{
		ll l=s.length(),i,m=0,j;
		char str[l+2];
		for(i=0;i<l;i++)
		{
			str[i]=s[l-1-i];
		}
		for(i=0;i<l;i++)
		{
			if(s[i]!=s[l-1-i]) m=1;
		}
		if(m==0)
		{
			cout<<s<<endl;
			continue;
		}
		str[i]='\0';
		string st(str);
		
		ll lps[l];
		i=1;
		j=0;
		lps[0]=0;
		while(i<l)
		{
			if(st[i]==st[j])
			{
				j++;
				lps[i]=j;
				i++;
			}
			else
			{
				if(j!=0)
				{
					j=lps[j-1];
				}
				else
				{
					
					lps[i]=0;
					i++;;
				}
			}
		}
//		for(i=0;i<l;i++)
//		{
//			cout<<i<<" : "<<lps[i]<<endl;
//		}
		i=0;
		j=0;
		while(i<l)
		{
			if(st[j]==s[i])
			{
				i++;
				j++;
			}
			else
			{
				if(j!=0) j=lps[j-1];
				else
				{
					i++;
				}
			}
		}
		//cout<<j<<endl;
		cout<<s;
		for(i=l-j-1;i>=0;i--)
		{
			cout<<s[i];
		}
		cout<<endl;
	}
}
