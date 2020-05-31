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
using namespace std;
void FAST_IO();
int main()
{
    //_time_
   //FAST_IO();
    ios_base::sync_with_stdio(0);
    string a,b;
    cin>>a>>b;
    ll sza=a.size(),szb=b.size(),cnta=0,cntb=0,cnt=0;
    for(ll i=0;i<szb;i++)
    {
        if(a[i]=='1')
            cnta++;
        if(b[i]=='1')
            cntb++;
    }

    if((cnta%2 && cntb%2) || (cnta%2==0 && cntb%2==0))
        cnt++;
    for(ll i=szb;i<sza;i++)
    {
        //cout<<a[i]<< " "<<cnta<<" "<<cntb<<endl;
        if(a[i]=='1')
            cnta++;
        if(a[i-szb]=='1')
            cnta--;
        if((cnta%2 && cntb%2) || (cnta%2==0 && cntb%2==0))
            cnt++;
    }
    cout<<cnt<<endl;
   // show
    return 0;
}
void FAST_IO()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef _offline
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
#endif
}

