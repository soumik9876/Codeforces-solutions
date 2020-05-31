#include<bits/stdc++.h>
#define ll                    long long int
#define pb                    push_back
#define F                     first
#define S                     second
#define mp                    make_pair
#define MOD                   1000000007
#define vi                    vector<int>
#define vll                   vector<ll>
#define pll                   pair<ll,ll>
#define pii                   pair<int,int>
#define all(p)                p.begin(),p.end()
#define mid(s,e)              (s+(e-s)/2)
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
    ll n;
    cin>>n;
    char graph[n+10][n+10];
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cin>>graph[i][j];
        }
    }

    ll m;
    cin>>m;
    vll seq;
    ll path[m+5];
    for(int i=0;i<m;i++)
        cin>>path[i];
    seq.eb(path[0]);

    for(int i=0;i<m-2;i++)
    {
        if(graph[path[i]][path[i+2]]=='1' || path[i]==path[i+2])
            seq.eb(path[i+1]);
    }

    seq.eb(path[m-1]);
    cout<<seq.size()<<endl;
    for(auto i:seq) cout<<i<< " ";
    cout<<endl;
    return 0;
}


