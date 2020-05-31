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
bool mark[510][510];
void FAST_IO();
int main()
{
    //_time_
   //FAST_IO();
    ll h,w,cx,cy;
    cin>>h>>w;
    string s[510];
    for(ll i=0;i<h;i++)
        cin>>s[i];
    bool check=false;
    for(ll i=1;i<h-1;i++)
    {
        for(ll j=1;j<w-1;j++)
        {
            if(s[i][j]=='*' && s[i+1][j]=='*' && s[i-1][j]=='*' && s[i][j+1]=='*' && s[i][j-1]=='*')
            {
                check=true;
                cx=i,cy=j;
                break;
            }
        }
        if(check)
            break;
    }
    if(!check)
    {
        cout<<"NO\n";
        return 0;
    }
    ll x=cx,y=cy;
    while(s[x][y]=='*')
    {
        mark[x][y]=true;
        x--;
        if(x<0)
            break;
    }
    x=cx,y=cy;
    while(s[x][y]=='*')
    {
        mark[x][y]=true;
        x++;
        if(x>h-1)
            break;
    }
    x=cx,y=cy;
    while(s[x][y]=='*')
    {
        mark[x][y]=true;
        y--;
        if(y<0)
            break;
    }
    x=cx,y=cy;
    while(s[x][y]=='*')
    {
        mark[x][y]=true;
        y++;
        if(y>w-1)
            break;
    }
    for(ll i=0;i<h;i++)
    {
        for(ll j=0;j<w;j++)
        {
            if(mark[i][j]==false && s[i][j]=='*')
                check=false;
        }
    }
    if(check)
        cout<<"YES\n";
    else
        cout<< "NO\n";
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

