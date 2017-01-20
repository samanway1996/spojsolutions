#include"stdio.h"
#include"bits/stdc++.h"
#include"string.h"
#include"math.h"
#include"iostream"
using namespace std;
#define ll long long int
#define mod 1000000007
int main()
    {
    int t,mode,q,w,e;
    cin>>t;
    char c;
    //cin>>c;
    while(t--)
        {
        char a[10000];
        cin>>c;
        //cin>>a;
        cin.getline(a,10000);
       // cout<<c<<" "<<a<<endl;
        ll l=strlen(a),i,j,k,num1=0,num2=0,num3=0;
        
            char f[10000];
            char s[10000];
            char b[10000];
        
            for(i=0;i<l;i++)
                {
                if(a[i]==' ')
                    break;
                f[i]=a[i];
                   //if(i==0)
                       //cout<<f[i]<<endl;
                if(a[i]=='a') mode=1;
            }  
        f[i]='\0';
        for(j=i+3;j<l;j++)
            {
            if(a[j]==' ')
                    break;
            s[j-3-i]=a[j];
            if(a[j]=='a') mode=2;
        }
        s[j-3-i]='\0';
        for(k=j+3;k<l;k++)
            {
            if(a[k]==' ')
                break;
            b[k-j-3]=a[k];
            if(a[k]=='a') mode=3;
        }
        b[k-j-3]='\0';
        //cout<<f<<" "<<s<<" "<<b<<endl;
        //cout<<a<<endl;
        q=strlen(f),w=strlen(s),e=strlen(b);
        if(mode==1)
            {
            j=0;
            for(i=w-1;i>=0;i--)
                {
                num2=num2+(s[i]-'0')*pow(10,j);
                j++;
            }
            j=0;
            for(i=e-1;i>=0;i--)
                {
                num3+=(b[i]-'0')*pow(10,j);j++;
                
            }
            cout<<(num3-num2)<<" + "<<num2<<" = "<<num3<<endl;
        }
        if(mode==2)
            {
            j=0;
            for(i=q-1;i>=0;i--)
                {
                num1=num1+(f[i]-'0')*pow(10,j);j++;
            }
            num1+=(c-'0')*pow(10,j);
            j=0;
            for(i=e-1;i>=0;i--)
                {
            
                num3+=(b[i]-'0')*pow(10,j);j++;
                
            }
            cout<<num1<<" + "<<(num3-num1)<<" = "<<num3<<endl;
        }
        if(mode==3)
            {
            j=0;
           for(i=q-1;i>=0;i--)
                {
                num1=num1+(f[i]-'0')*pow(10,j);j++;
            }
            num1+=(c-'0')*pow(10,j);
            j=0;
            for(i=w-1;i>=0;i--)
                {
                num2+=(s[i]-'0')*pow(10,j);j++;
                
            }
            cout<<num1<<" + "<<num2<<" = "<<num1+num2<<endl;
        }
    }
} 
