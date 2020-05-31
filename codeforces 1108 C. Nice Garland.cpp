#include<bits/stdc++.h>
#define endl '\n'
#define time clock_t tStart = clock();
#define show printf("Time taken: %.6fs\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);
#define ll long long int
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
ll costs[6];
void FAST_IO();
int main()
{
    //_time_
   FAST_IO();
    ll n;
    string s;
    string s1[6]={"RGB","RBG","BRG","BGR","GBR","GRB"};

    cin>>n;
    cin>>s;
    for(ll i=0;i<6;i++)
    {
        ll track=0;
        for(ll j=0;j<n;j++)
        {
            if(s[j]!=s1[i][track++])
                costs[i]++;
            if((j+1)%3==0)
                track=0;
        }
    }
    ll minn=0;
    for(ll i=1;i<6;i++)
    {
        if(costs[i]<costs[minn])
            minn=i;
    }
    cout<<costs[minn]<<endl;
    for(ll i=0;i<n/3;i++)
    {
        for(ll j=0;j<3;j++)
            cout<<s1[minn][j];
    }
    for(ll i=0;i<n%3;i++)
        cout<<s1[minn][i];
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

