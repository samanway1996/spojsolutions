#include"bits/stdc++.h"
using namespace std;
#define ll long long int
#define mod 1000000007
int main()
    {
    while(1)
        {
        ll a,b,c;
        scanf("%lli%lli%lli",&a,&b,&c);
        if(a==0&&b==0 &&c==0) break;
        if(b-a==c-b)
            {
            printf("AP %lli\n",c+c-b);
        }
        else
            {
            printf("GP %lli\n",c*(c/b));
        }
    }
} 
