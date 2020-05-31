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
    int n;
    string s1,s2;
    cin>>n>>s1;
    s2=s1;
    vi nexttog,start,period;
    for(int i=0;i<n;i++)
    {
        int a,b;
        cin>>a>>b;
        period.eb(a);
        start.eb(b),nexttog.eb(b);
    }
    int mx=0;
    for(auto i:s2)
    {
        if(i=='1') mx++;
    }
    for(int run=0;run<50000;run++)
    {
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            nexttog[i]--;
            if(nexttog[i]==0)
            {
                s2[i]^=1;
                nexttog[i]=period[i];

            }
            if(s2[i]=='1') cnt++;
        }
        //if(cnt==mx) break;
        mx=max(cnt,mx);
        if(mx==n) break;
        //cout<<s2<<" "<<mx<<" "<<cnt<<endl;
//        if(s2==s1)
//        {
//            if(nexttog==start)
//                break;
//        }

    }
    cout<<mx<<endl;
    return 0;
}


