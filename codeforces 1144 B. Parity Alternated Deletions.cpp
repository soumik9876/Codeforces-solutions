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
void FAST_IO();
int main()
{
    //_time_
   //FAST_IO();
    ll oddcnt=0,evencnt=0,n,temp;
    vll odd,even;
    cin>>n;
    for(ll i=0;i<n;i++)
    {
        cin>>temp;
        if(temp%2)
        {
            oddcnt++;
            odd.pb(temp);
        }
        else
        {
            evencnt++;
            even.pb(temp);
        }
    }
    sort(even.begin(),even.end(),greater<ll> ());
    sort(odd.begin(),odd.end(),greater<ll> ());
    if(abs(oddcnt-evencnt)<=1)
        cout<<0<<endl;
    else
    {
        ll total=0;
        if(oddcnt>evencnt)
            for(ll i=evencnt+1;i<oddcnt;i++)
            {
                total+=odd[i];
            }
        else
            for(ll i=oddcnt+1;i<evencnt;i++)
            {
                total+=even[i];
            }
        cout<<total<<endl;
    }
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

