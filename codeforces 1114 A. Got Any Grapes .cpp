#include<bits/stdc++.h>
#define ll                    long long int
#define loop(i,a,b)           for(int i=a;i<b;++i)
#define count_1(n)            __builtin_popcountll(n)
#define pb                    push_back
#define F                     first
#define S                     second
#define mp                    make_pair
#define clr(x)                x.clear()
#define MOD                   1000000007
#define itoc(c)               ((char)(((int)'0')+c))
#define vi                    vector<int>
#define pll                   pair<ll,ll>
#define pii                   pair<int,int>
#define all(p)                p.begin(),p.end()
#define max(x,y)              (x>y)?x:y
#define min(x,y)              (x<y)?x:y
#define mid(s,e)              (s+(e-s)/2)
#define sv()                  ll t; scanf("%lld",&t); while(t--)
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int x,y,z,a,b,c;
    bool check=true;
    cin>>x>>y>>z>>a>>b>>c;
    if(a<x)
    {
        check=false;

    }
    else
    {
        a-=x;
        int d=a+b;
        if(d<y)
            check=false;
        else
        {
            d-=y;
            if(c+d<z)
                check=false;
        }
    }
    if(!check)
        cout<<"NO\n";
    else
        cout<<"YES\n";
    return 0;
}

