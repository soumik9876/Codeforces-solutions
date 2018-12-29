#include<iostream>
#include<string>
#include<cstdio>
#include<algorithm>
using namespace std;
int main()
{
    long long i,n,m,cnt=0,pos,last;
    string s,t;
    bool check=true;
    scanf("%lld %lld ",&n,&m);
    cin>>s>>t;
    /*int maxx=n;
    if(n<m)
        maxx=m;*/
    /*for(i=0;i<m;i++)
    {
        if(s[cnt]==t[i])
            cnt++;
        if(s[cnt]=='*')
            cnt++;
        if(cnt==n)
            break;
    }*/
    for(i=0;i<n;i++)
    {
        if(s[i]=='*')
        {
            pos=i;
            break;
        }
        if(s[i]!=t[i])
            check=false;

    }
    last=n-1;
    if(check==true)
    {
        //cout<<check<<endl;
    for(i=m-1;last>pos && i>=0;i-- && last--)
    {
        if(t[i]!=s[last])
        {
            check=false;
            break;
        }

        if(i==pos-1)
        {
            check=false;
            break;
        }
       //cout<<check<<endl;
    }

    }
    //if((cnt==n && i==m-1) || s=="*")
    if(check==true)
        cout<<"YES\n";
    else
        cout<<"NO\n";
    return 0;
}
