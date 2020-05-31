
// Problem : B. Collecting Packages
// Contest : Codeforces Round #615 (Div. 3)
// URL : https://codeforces.com/contest/1294/problem/B
// Memory Limit : 256.000000 MB 
// Time Limit : 1000.000000 milisec 
// Powered by CP Editor (https://github.com/coder3101/cp-editor)

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
bool comp(const pii &a,const pii &b)
{
    if(a.F==b.F)
        return a.S>b.S;
    return a.F>b.F;
}
int main()
{
    KAMEHAMEHA
//    #ifdef _soumik
//        freopen("input.txt", "r", stdin);
//    #endif
    int t;
    cin>>t;
    while(t--)
    {
        int n,x,y;
        cin>>n;
        vector<pii> a;
        
        while(n--)
        {
            cin>>x>>y;
            a.eb(x,y);
        }
        
        sort(all(a));
        string s;
        int m=0,f=0;
        bool check=true;
        for(auto i: a)
        {
        //cout<<i.F<<" "<<i.S<<endl;
            if(i.F<m || i.S<f)
            {
                check=false;
                break;
            }
            for(int j=1;j<=(i.F-m);j++)
                s+='R';
            for(int j=1;j<=(i.S-f);j++)
                s+='U';
            m=i.F,f=i.S;
        }
        if(check)
        {
            cout<<"YES"<<endl;
            cout<<s<<endl;
        }
        else
            cout<<"NO"<<endl;
    }
    return 0;
}

