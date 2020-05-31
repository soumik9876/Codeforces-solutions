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
    int t;
    cin>>t;
    while(t--)
    {
        ll n,m,odd1=0,odd2=0,even1=0,even2=0;
        cin>>n;
        for(int i=0,temp;i<n;i++)
        {
            cin>>temp;
            if(temp%2)
                odd1++;
            else
                even1++;
        }
        cin>>m;
        for(int i=0,temp;i<m;i++)
        {
            cin>>temp;
            if(temp%2)
                odd2++;
            else
                even2++;
        }
        ll ans=(odd1*odd2)+(even1*even2);
        cout<<ans<<endl;
    }
    return 0;
}


