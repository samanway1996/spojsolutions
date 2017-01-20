#include"bits/stdc++.h"
using namespace std;
#define ll long long int
#define mod 1000000007
ll dp[2008][2008];
int main()
    {
    ll t;
    cin>>t;
    while(t--)
        {
        char a[2003],b[2007];
        cin>>a>>b;
        ll l1=strlen(a),l2=strlen(b),i,j;
        
        for(i=0;i<=l1;i++)
            {
            for(j=0;j<=l2;j++)
                {
                if(i==0 || j==0)
                    
                    {
                    if(i==0) dp[i][j]=j;
                    else dp[i][j]=i;
                }
                else
                    {
                    if(a[i-1]==b[j-1])
                        dp[i][j]=dp[i-1][j-1];
                    else
                        {
                        dp[i][j]=min(min(dp[i-1][j],dp[i][j-1]),dp[i-1][j-1])+1;
                    }
                }
            }
        }
        cout<<dp[l1][l2]<<endl;
    }
}
