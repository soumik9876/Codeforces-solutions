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
    string t,t1;
    cin>>t;
    bool found=true;
    ll sz=t.size(),s=0,track=sz-1,match=0;
    for(ll i=0;i<sz;i++)
    {
        if(t[i]!='a')
            t1+=t[i];
    }
    ll s2=t1.size();
    if(s2%2)
        found=false;
    if(found)
    for(ll i=0;i<s2/2;i++)
    {
        if(t1[i]!=t1[(s2/2)+i])
            found=false;
    }
    if(found)
    for(ll i=sz-1;i>=sz-(s2/2);i--)
        if(t[i]=='a')
        {
            found=false;
            break;
        }
    if(found)
    {
        for(ll i=0;i<sz;i++)
        {
            if(match==s2/2 && t[i]!='a')
                break;
            cout<<t[i];
            if(t[i]!='a')
                match++;

        }
        cout<<endl;
    }
    else
        cout<<":(\n";
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

