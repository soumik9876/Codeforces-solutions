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
    ll n;
    vector< pll > b;
    cin>>n;
    for(ll temp,i=1;i<=n;i++)
    {
        cin>>temp;
        b.eb(temp,i);
    }
    sort(all(b));
    ll diff=b[1].first-b[0].F,d;
    map<ll,ll> diffs;
    for(ll i=1;i<n-1;i++)
    {
        diffs[b[i+1].F-b[i].F]++;
    }
    if(diffs.size()==1 || !diffs.size())
    {
        cout<<b[0].S<<endl;
        return 0;
    }
    if(diffs.size()==2)
    {
        if(diffs[b[2].F-b[1].F]==1 && diffs[b[2].F-b[0].F]==n-3)
        {
            cout<<b[1].S<<endl;
            return 0;
        }
    }
    //cout<<"hre"<<endl;
    ll different=0,ind=0;
    for(ll i=1;i<n-1;i++)
    {
        if(b[i+1].F-b[i].F!=diff)
        {
            //cout<<b[i+2].F<< " "<<b[i].F<<endl;
            if(i<n-2)
            {
                if(b[i+2].F-b[i].F==diff)
                {
                    different++;
                }
                else
                {
                    cout<<-1<<endl;
                    return 0;
                }
                if(different>1)
                {
                    cout<<-1<<endl;
                    return 0;
                }
                else
                {
                    ind=b[i+1].second;
                    i++;
                }
            }
            else
            {
                different++;
                if(different>1)
                {
                    cout<<-1<<endl;
                    return 0;
                }
                else
                {
                    ind=b[i+1].second;
                    i++;
                }
            }
        }
    }
    cout<<ind<<endl;
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

