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
int main()
{
    ll n,k,minn;
    vector<ll> a;
    cin>>n>>k;
    for(int i=0;i<n;i++)
    {
        ll temp;
        cin>>temp;
        a.push_back(temp);
    }
    sort(a.begin(),a.end());
    minn=0;
    ll total=0,j=0;
    for(ll i=0;i<k;i++,j++)
    {

        while(j<n)
        {
            if(a[j]-total==0)
                j++;
            else
                break;
        }
        if(j>=n)
        {
            cout<<0<<endl;
            continue;
        }
        cout<<a[j]-total<<endl;
        total=a[j];
    }
    return 0;
}
