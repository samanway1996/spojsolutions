             /* #samanwaydey #cse  #ismdhanbad  PROBLEMS
 STATUS
 RANKS
 DISCUSS
CONTESTS
  PROFILE 
Problems  Hash it! My submissions  Not hidden submissions All submissions
samanway1996: submissions
Hash it!

 
ID		DATE	PROBLEM	RESULT	TIME	MEM	LANG
16894111		2016-05-10 15:22:22	Hash it!	runtime error (SIGABRT)
edit    ideone it
0.00	3.4M	C++14
Invert 
Selected submissions:   Execute  ?
×
Source code 16894111
SPOJ submission 16894111 (C++14) plaintext list. Status: RE, problem HASHIT, contest SPOJ. By samanway1996 (samanway1996), 2016-05-10 15:22:22.*/
#include"bits/stdc++.h"
using namespace std;
#define ll long long int
#define mod 101
#define pb push_back
int main()
{
	ll tt,i,t;
	scanf("%lli",&tt);
	while(tt--)
	{
		string s[101];
		for(i=0;i<101;i++)
		{
			s[i]="#";
		}
		ll n,c=0;
		scanf("%lli",&n);
		map<string,ll > mp;
		while(n--)
		{
			
			string strw;
			cin>>strw;
			ll l2=strw.length();
			string str="";
			for(i=4;i<l2;i++)
			{
				str+=strw[i];
			}
			str[i-4]='\0';
			//cout<<str<<endl;
			if(strw[0]=='D')
			{
				
				if(mp[str]!=0)
				{
					s[mp[str]-1]="#";
					mp[str]=0;
				}
				else
				{
					continue;
				}
			}
			else
			{
				if(mp[str]!=0)
				{
					continue;
				}
				else
				{
					ll l=str.length();
					t=0;
					for(i=0;i<l;i++)
					{
						t+=(i+1)*str.at(i);
					}
					t*=19;
					if(s[t%mod]=="#")
					{
						s[t%mod]=str;
						mp[str]=t%mod+1;
					}
					else
					{
						ll kk=0;
						for(i=1;i<20;i++)
						{
							ll loc=t+i*i+23*i;
							if(s[loc%mod]=="#")
							{
								s[loc%mod]=str;
								mp[str]=loc%mod+1;
								kk=1;
								break;
							}
							
						}
					}
				}
			}
		}
		//printf("%lli\n",mp.size());
		ll f=0;
		for(i=0;i<101;i++)
		{
			if(s[i]!="#")
			{
				f++;
				//printf("%lli:",i);
				//cout<<s[i]<<endl;
			}
		}
		printf("%lli\n",f);
		for(i=0;i<101;i++)
		{
			if(s[i]!="#")
			{
				f++;
				printf("%lli:",i);
				cout<<s[i]<<endl;
			}
		}
	}
} 

