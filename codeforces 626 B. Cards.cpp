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
#define eb                    emplace_back
using namespace std;
void FAST_IO();
int main()
{
    //_time_
   //FAST_IO();
    ll n,red=0,green=0,blue=0;
    string s;
    cin>>n>>s;
    for(ll i=0;i<n;i++)
    {
        if(s[i]=='R')
            red++;
        else if(s[i]=='G')
            green++;
        else
            blue++;
    }
    if(red==n || green==n || blue==n)
        cout<<s[0]<<endl;
    else if(red>0 && green>0 && blue>0)
        cout<<"BGR\n";
    else if(red==0)
    {
        if(green==1 && blue==1)
            cout<<"R\n";
        if(green>1 && blue>1)
            cout<<"BGR\n";
        else if(green==1 && blue>1)
            cout<<"GR\n";
        else if(green>1 && blue==1)
            cout<<"BR\n";
    }
    else if(green==0)
    {
        if(red==1 & blue==1)
            cout<<"G\n";
        if(red>1 && blue>1)
            cout<<"BGR\n";
        else if(red==1 && blue>1)
            cout<<"GR\n";
        else if(red>1 && blue==1)
            cout<<"BG\n";
    }
    else if(blue==0)
    {
        if(green==1 && red==1)
            cout<<"B\n";
        if(green>1 && red>1)
            cout<<"BGR\n";
        else if(green==1 && red>1)
            cout<<"BG\n";
        else if(green>1 && red==1)
            cout<<"BR\n";
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
