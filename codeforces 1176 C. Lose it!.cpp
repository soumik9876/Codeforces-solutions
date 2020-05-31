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
ll cnt[7];
void FAST_IO();
int main()
{
    //_time_
   //FAST_IO();
    ll n,a;
    ll nums[]={4,8,15,16,23,42};
    cin>>n;
    for(ll i=0;i<n;i++)
    {
        cin>>a;
        for(ll i=0;i<6;i++)
        {

            if(a==nums[i])
            {
                if(i==0)
                    cnt[i]++;
                else if(cnt[i]+1<=cnt[i-1])
                    cnt[i]++;
            }
        }
    }
//    for(ll i=0;i<6;i++)
//        cout<<cnt[i]<<endl;
    cout<<n-(6*cnt[5])<<endl;
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

