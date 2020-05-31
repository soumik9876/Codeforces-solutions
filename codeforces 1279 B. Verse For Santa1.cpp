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
    long long t;
    cin>>t;

    for(int cs=0;cs<t;cs++)
    {
        ll n, s;
        cin>>n>>s;

        ll mx[n+1], sum[n+1];
        ll a[n+1], h=0;

        for(int i=0; i<n; i++){
            cin>>a[i];
            h+=a[i];
        }

        if(h<=s){
            cout<<0<<endl;
            continue;
        }

        mx[0]=sum[0]=a[0];

        for(int i=1; i<n; i++)
        {
            mx[i]=max(mx[i-1], a[i]);
            sum[i]=sum[i-1]+a[i];
        }

        ll total=0;

        for(int i=0; i<n; i++)
        {
            if(sum[i]-mx[i]<=s) total=i;
        }

        ll extra=0;

        for(int i=0; i<n; i++)
        {
            if(mx[total]==a[i])
            {
                extra=i+1;
                break;
            }
        }

        cout<<extra<<endl;
    }

    return 0;
}
