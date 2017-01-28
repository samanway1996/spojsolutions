#include"bits/stdc++.h"
using namespace std;
#define ll long long int
#define pb push_back
#define mod 1000000007

int main()
{
	string s;
	while(cin>>s && s!="*")
	{
		ll l=s.length();
		ll i,j;
		ll lps[l];
		i=1;
		lps[0]=0;
		j=0;
		while(i<l)
		{
			if(s[i]==s[j])
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
					i++;
				}
			}
		}
		//cout<<lps[l-1]<<endl;
		if(lps[l-1]%(l-lps[l-1])==0)
		cout<<l/(l-lps[l-1])<<endl;
		else
		cout<<"1\n";
	}
}
