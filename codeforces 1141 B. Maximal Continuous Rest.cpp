#include<bits/stdc++.h>
#define endl '\n'
#define time clock_t tStart = clock();
#define show printf("Time taken: %.6fs\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);
#define ll                  long long int
#define ull                 unsigned long long
#define loop(a,b)           for(int i=a;i<=b;++i)
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
void FAST_IO();
int main()
{
    //_time_
   //FAST_IO();
    ll n,temp;
    vll a,cnts;
    cin>>n;
    ll cnt=0,maxx=0;
    for(ll i=0;i<n;i++)
    {
        cin>>temp;
        a.pb(temp);
        if(temp==0)
        {
            cnts.pb(cnt);
            cnt=0;
        }
        else
        {
            cnt++;
            if(i==n-1)
                cnts.pb(cnt);
        }
        if(cnt>maxx)
            maxx=cnt;


       // cout<<maxx<<endl;
    }
   // cout<<cnts[0]<< " "<< cnts[2]<<endl;
    if(a[0]==1 && a[n-1]==1)
    {
        if(cnts[0]+cnts[cnts.size()-1]>maxx)
            maxx=cnts[0]+cnts[cnts.size()-1];
    }
    cout<<maxx<<endl;

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

