#include"bits/stdc++.h"
using namespace std;
#define ll long long int
#define mod 1000000007
int main()
    {
    ll t;
    scanf("%lli",&t);
    while(t--)
        {
        ll n,i,j,k,mo,mode;
        scanf("%lli",&n);
        string s[n];
        for(i=0;i<n;i++)
            {
            cin>>s[i];
            //cout<<s[i]<<endl;
        }
        sort(s,s+n);
        /*for(i=0;i<n;i++)
            {
            
            cout<<s[i].length()<<endl;
        }*/
        mode=0;
        for(i=1;i<n;i++)
            {
            if(s[i].length()>=s[i-1].length())
                {
                mo=0;
                for(j=0;j<s[i-1].length();j++)
                    {
                    if(s[i-1][j]==s[i][j])
                        {
                        continue;
                    }
                    else
                        {
                        mo=1;
                        break;
                    }
                }
                if(mo==0)
                    {
                    cout<<"NO\n";
                    mode=1;
                    break;
                }
                else
                    {
                    continue;
                }
            }
        }
       if(mode==0)
           {
           cout<<"YES\n";
       }
        
    }
}
