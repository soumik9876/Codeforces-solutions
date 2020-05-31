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
#define KAMEHAMEHA            ios_base::sync_with_stdio(0);
#define RASENGAN              ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    KAMEHAMEHA
//    #ifdef _soumik
//        freopen("input.txt", "r", stdin);
//    #endif
    ll n,p;
    string s;
    cin>>n>>p>>s;
    ll sz=s.size();
    bool check=true;
    for(ll i=0;i<sz-p;i++)
    {
        //cout<<s[i]<< " "<<s[i+p]<<endl;
        if(s[i]=='.' || s[i]!=s[i+p])
        {
            check=false;
            break;
        }
    }
    if(check)
    {
        cout<<"NO\n";
        return 0;
    }
    for(ll i=0;i<sz-p;i++)
    {
        if(s[i]=='.' && s[i+p]!='0')
            s[i]='0';
        else if(s[i]=='.' && s[i+p]=='0')
            s[i]='1';
    }
    for(ll i=sz-p;i<p;i++)
    {
        if(s[i]=='.')
            s[i]='0';
    }
    for(ll i=p;i<sz;i++)
    {
        if(s[i]=='.')
        {
            if(s[i-p]=='0')
                s[i]='1';
            else
                s[i]='0';
        }
    }
    cout<<s<<endl;
    return 0;
}


