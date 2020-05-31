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

    ll q;
    cin>>q;
    while(q--)
    {
        ll n,m,tensum=0;
        cin>>n>>m;
        for(ll i=1;i<=9;i++)
        {
            tensum+=(m*i)%10;
        }
        tensum*=((n/m)/10);
        for(ll i=1;i<=((n/m)%10);i++)
        {
            tensum+=(m*i)%10;
        }
        cout<<tensum<<endl;
    }
    return 0;
}

