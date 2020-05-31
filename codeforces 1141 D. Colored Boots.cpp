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
#define clr(x)                x.clear()
#define MOD                   1000000007
#define itoc(c)               ((char)(((int)'0')+c))
#define vi                    vector<int>
#define vll                   vector<ll>
#define pll                   pair<ll,ll>
#define pii                   pair<int,int>
#define all(p)                p.begin(),p.end()
#define mid(s,e)              (s+(e-s)/2)
#define sv()                  ll t,n; scanf("%lld",&t);n=t; while(t--)
#define tcase()               ll t,n; cin>>t;n=t; while(t--)
#define iscn(num)             scanf("%d",&num);

using namespace std;
vll alpha[28];
ll used[28];
void FAST_IO();
int main()
{
    //_time_
   //FAST_IO();
    string s1,s2;
    ll n;
    cin>>n;
    cin>>s1>>s2;
    for(ll i=0;i<n;i++)
    {
        if(s2[i]=='?')
            alpha[27].pb(i);
        else
            alpha[s2[i]-96].pb(i);
    }
    ll cnt=0;
    vector<pll> v;
    for(ll i=0;i<n;i++)
    {
        if(s1[i]>96 && s1[i]<123)
        {
            ll sz=alpha[s1[i]-96].size();
            if(sz>used[s1[i]-96])
            {
                cnt++;
                v.pb(mp(i+1,alpha[s1[i]-96][used[s1[i]-96]]+1));
                used[s1[i]-96]++;
            }
            else if(alpha[27].size()>used[27])
            {
                cnt++;
                v.pb(mp(i+1,alpha[27][used[27]]+1));
                used[27]++;
            }
        }
    }
    for(ll i=0;i<n;i++)
    {
        if(s1[i]=='?')
        {
            for(ll j=1;j<=27;j++)
            {
                if(alpha[j].size()>used[j])
                {
                    cnt++;
                    v.pb(mp(i+1,alpha[j][used[j]]+1));
                    used[j]++;
                    break;
                }
            }
        }
    }
    cout<<cnt<<endl;
    for(ll i=0;i<cnt;i++)
        cout<<v[i].first<< " "<<v[i].second<<endl;
   // show
    return 0;
}
void FAST_IO()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    //cout.setf(ios::fixed);
    //cout.precision(20);
#ifndef _offline
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
#endif
}

