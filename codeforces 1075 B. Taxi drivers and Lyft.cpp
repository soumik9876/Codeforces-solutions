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
int cnt[100000];
void FAST_IO();
int main()
{
    //_time_
   //FAST_IO();
    vll all,rider,driver;
    ll n,m,x,t;
    cin>>n>>m;
    for(ll i=0;i<n+m;i++)
    {
        cin>>x;
        all.emplace_back(x);
    }
    for(ll i=0;i<n+m;i++)
    {
        cin>>t;
        if(t)
            driver.emplace_back(all[i]);
        else
            rider.emplace_back(all[i]);
    }
    ll last=0;
    for(ll i=0;i<n;i++)
    {
        ll dist=abs(driver[last]-rider[i]);
        for(ll j=last+1;j<m;j++)
        {
            if(abs(driver[j]-rider[i])<dist)
            {
                dist=abs(driver[j]-rider[i]);
                last=j;
            }
            else
                break;
        }
        cnt[last]++;
    }
    for(ll i=0;i<m;i++)
        cout<<cnt[i]<< " ";
    cout<<endl;
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

