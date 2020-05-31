#include<bits/stdc++.h>
#define endl '\n'
#define time clock_t tStart = clock();
#define show printf("Time taken: %.6fs\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);
#define ll                    long long int
#define loop(a,b)             for(int i=a;i<=b;++i)
#define count_1(n)            __builtin_popcountll(n)
#define pb                    push_back
#define F                     first
#define S                     second
#define mp                    make_pair
#define MOD                   1000000007
#define itoc(c)               ((char)(((int)'0')+c))
#define vi                    vector<int>
#define vll                   vector<ll>
#define pll                   pair<ll,ll>
#define pii                   pair<int,int>
#define all(p)                p.begin(),p.end()
#define mid(s,e)              (s+(e-s)/2)
#define tcase()               ll t,n; cin>>t;n=t; while(t--)
#define iscn(num)             scanf("%d",&num);
#define eb                    emplace_back
#define ull                   unsigned long long
#define KAMEHAMEHA            ios_base::sync_with_stdio(0);
#define RASENGAN              ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    KAMEHAMEHA
    #ifdef _soumik
        freopen("input.txt", "r", stdin);
    #endif
    string s;
    cin>>s;
    ll n;
    cin>>n;
    string t[n+5];
    for(ll i=0;i<n;i++)
    {
        cin>>t[i];
    }
    for(ll i=0;i<n;i++)
    {
        for(ll j=0;j<n;j++)
        {
            if((t[i][1]==s[0] && t[j][0]==s[1]) || (t[i][0]==s[0] && t[i][1]==s[1]))
            {
                cout<<"YES\n";
                return 0;
            }
        }
    }
    cout<<"NO\n";
    return 0;
}

