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
        ll n,s,mn=INT_MAX;
        vector < pll > p;
        cin>>n>>s;
        for(int i=0;i<n;i++)
        {
            ll l,r;
            cin>>l>>r;
            mn=min(mn,l);
            p.eb(r,l);
        }
        sort(all(p),greater<pll> ());
        ll md=((n/2));
        ll low=mn,high=p[md].F,mid;
        while(low<high)
        {
            //cout<<low<< " "<<high<<endl;
            mid=(low+high+1)/2;
            ll firsthalf=((n/2)+1)*mid;
            ll left=s-firsthalf;
            if((left*2)/n<mn)
                high=mid-1;
            else
                low=mid+1;
        }
        cout<<mid<<endl;
    }
    return 0;
}


