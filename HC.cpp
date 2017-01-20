#include"bits/stdc++.h"
using namespace std;
#define ll long long int
#define mod 1000000007
 
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    ll tt;
    scanf("%lli",&tt);
    while(tt--)
        {
        ll n,c=0;
        scanf("%lli",&n);
        while(n--)
            {
            string s;
            cin>>s;
            if(s=="lxh") c++;
        }
        if(c%2==0)
            {
            printf("hhb\n");
        }
        else printf("lxh\n");
    }
    return 0;
}
