#include<bits/stdc++.h>
#define ll                    long long int
#define pb                    push_back
#define F                     first
#define S                     second
#define mp                    make_pair
#define MOD                   1000000007
#define vi                    vector<int>
#define vll                   vector<ll>
#define pll                   pair<ll,ll>
#define pii                   pair<int,int>
#define all(p)                p.begin(),p.end()
#define mid(s,e)              (s+(e-s)/2)
#define eb                    emplace_back
#define ull                   unsigned long long
#define KAMEHAMEHA            ios_base::sync_with_stdio(0);
#define RASENGAN              ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    KAMEHAMEHA
//    #ifdef _soumik
//        freopen("input.txt", "r", stdin);
//    #endif
    int n,m,x=0;
    cin>>n>>m;
    vi a,b;
    for(int i=0,temp;i<n;i++)
    {
        cin>>temp;
        a.eb(temp);
    }
    for(int i=0,temp;i<n;i++)
    {
        cin>>temp;
        b.eb(temp);
    }
    sort(all(a)),sort(all(b));
//    for(int i=0;i<n;i++)
//        cout<<a[i]<< " "<<b[i]<<endl;
    int mn=INT_MAX;
    if(a!=b)
    {
        for(int j=0;j<n;j++)
        {
            int cnt=j;
            int diff=b[0]-a[cnt++];
            if(diff<0)
                diff+=m;
            bool check=true;
            for(int i=1;i<n;i++)
            {
                if(cnt==n)
                    cnt=0;
                int d=b[i]-a[cnt++];
                if(d<0) d+=m;
                if(d!=diff)
                {
                    check=false;
                    break;
                }
            }
            //cout<<diff<< " "<<check<<endl;
            if(check)
            {
                mn=min(mn,diff);
            }
        }
        x=mn;
    }
//    for(int i=0;i<n;i++)
//        cout<<a[i]<< " "<<b[i]<<endl;
    cout<<x<<endl;
    return 0;
}


