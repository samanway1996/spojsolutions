#include"bits/stdc++.h"
using namespace std;
#define ll long long int
#define mod 1000000007
ll dp[2008][2008];
int main()
    {
    
    while(1)
        {
        ll n,m;
        scanf("%lli%lli",&n,&m);
        if(n==-1) break;
        if(n==0 &&m ==0) cout<<"0\n";
        else if(n==m)
        printf("1\n");
        else if(n>m)
            {
            m++;
            cout<<ceil(n/(m*1.0))<<endl;
        }
        else
            {
            n++;
            cout<<ceil(m/(n*1.0))<<endl;
        }
    }
}
