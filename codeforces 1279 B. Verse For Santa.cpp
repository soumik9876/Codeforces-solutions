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
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,s;
        cin>>n>>s;
        vll a;
        for(int i=0,temp;i<n;i++)
        {
            cin>>temp;
            a.eb(temp);
        }
        int cnt=0,mx=0,cnt1=0,extra=0;
        bool yes=false;
        for(int i=0;i<n;i++)
        {
            if(cnt>=s)
            {
               // cout<<cnt1<< " "<<extra<<" "<<a[mx]<<endl;
                if(cnt1+max(0LL,(cnt-s))==a[mx])
                {
                    if(extra)
                        yes=true;
                    break;
                }
                else if(cnt1+max(0LL,(cnt-s))>a[mx])
                {
                    if(extra>1)
                        yes=true;
                    break;
                }
                cnt1+=a[i];
                extra++;

            }
            else
            {
                cnt+=a[i];
                if(a[mx]<a[i])
                    mx=i;
            }
            if(yes)
                break;
        }
        if(yes)
            cout<<mx+1<<endl;
        else
            cout<<0<<endl;
    }
    return 0;
}

