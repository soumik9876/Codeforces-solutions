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
bool visited[2010];
vi tree[2010];
int dfs(int node)
{
    if(tree[node].size()==0)
        return 1;
    int mx=0;
    for(auto i:tree[node])
    {
        mx=max(mx,dfs(i)+1);
    }
    return mx;
}
int main()
{
    KAMEHAMEHA
//    #ifdef _soumik
//        freopen("input.txt", "r", stdin);
//    #endif
    int n,p;
    cin>>n;
    vi roots;

    for(int i=0;i<n;i++)
    {
        cin>>p;
        if(p==-1) roots.eb(i+1);
        else
            tree[p].eb(i+1);
    }
    int mx=0;
    for(auto i:roots)
    {
        mx=max(mx,dfs(i));
    }
    cout<<mx<<endl;
    return 0;
}


