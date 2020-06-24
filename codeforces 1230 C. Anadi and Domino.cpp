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
    int n,m;
    vi graph[8];
    cin>>n>>m;

    bool nodes[8]={};
    for(int i=0;i<m;i++)
    {
        int x,y;
        cin>>x>>y;
        if(x<y)
            swap(x,y);
        graph[x].eb(y);
    }
    int total=0;
    for(int i=1;i<=6;i++)
    {
        for(auto j:graph[i])
        {
            total++;
            nodes[i]=true;
            nodes[j]=true;
        }
    }
    bool check=false;
    for(int i=1;i<=6;i++)
    {
        if(nodes[i]==false)
        {
            total+=graph[7].size();
            check=true;
        }
    }
    if(check==false && graph[7].size())
        total++;
    cout<<total<<endl;
    return 0;
}


