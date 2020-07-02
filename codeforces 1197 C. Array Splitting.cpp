#include<bits/stdc++.h>
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
//    #ifdef _soumik
//        freopen("input.txt", "r", stdin);
//    #endif
    ll temp,temp1,n,k,mn=INT_MAX,cnt=0,total=0;
    vll a,segs;
    vector< pair<ll,ll> > diff;
    cin>>n>>k>>temp;
    a.eb(temp);
    for(ll i=1;i<n;i++)
    {
        cin>>temp1;
        a.eb(temp1);
        diff.eb(temp1-temp,i-1);
        temp=temp1;
    }
    sort(all(diff),greater<pair<ll,ll>> ());
    segs.eb(-1);
    for(int i=0;i<k-1;i++)
    {
        segs.eb(diff[i].S);
    }
    sort(all(segs));
//    for(auto i:segs)
//        cout<<i<<endl;
    for(int i=1;i<k;i++)
    {
        total+=a[segs[i]]-a[segs[i-1]+1];
        //cout<<total<<endl;
    }
    total+=(a[n-1]-a[segs[segs.size()-1]+1]);
    cout<<total<<endl;
    return 0;
}


