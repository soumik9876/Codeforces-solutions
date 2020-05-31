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
    int t,a,b,c,r;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c>>r;
        if(a>b) swap(a,b);
        int low=max(a,c-r),high=min(b,c+r),total=0;
        total=b-a;
        int in=high-low;
        if(in>0)
            total-=in;
            //cout<<in<<endl;
        cout<<total<<endl;
    }
    return 0;
}

