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
map <ll,ll> cnt;
void FAST_IO();
int main()
{
    //_time_
   //FAST_IO();
    ll n,m;
    vector< pair <ll,ll> > p;
     //nums;
    cin>>n>>m;
    for(ll i=0;i<m;i++)
    {
        ll a,b;
        cin>>a>>b;
        p.pb(mp(a,b));
        cnt[a]++;
        if(a!=b)
            cnt[b]++;
//        if(cnt[a]>=m/2)
//            nums.pb(cnt[a]);
//        if(cnt[b]>=m/2)
//            nums.pb(cnt[b]);
    }
    bool check = false;
	ll half=m/2;
	for(auto i:cnt){
        if(i.second>=half)
        {
            ll num=i.first;
            if(i.second==m)
            {
                check=true;
                break;
            }
            map<ll,ll> t;
            for(ll j=0;j<m;j++)
            {
                if(p[j].first!=num && p[j].second!=num)
                {
                    t[p[j].first]++;
                    t[p[j].second]++;
                }
            }
            for(auto k:t)
            {
                if(i.second+k.second>=m)
                {
                    check=true;
                    break;
                }
            }
        }
	}
	if(check)
        cout<<"YES\n";
    else
        cout<<"NO\n";
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
