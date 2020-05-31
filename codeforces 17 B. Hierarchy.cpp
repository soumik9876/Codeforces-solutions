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
    cin>>n;
    int cost[n+1];
    bool check[n+1]={};
    memset(cost,0,sizeof(cost));
    for(int i=1,temp;i<=n;i++)
    {
        cin>>temp;
    }
    cin>>m;
    ll total=0,childs=0;

    for(int i=1;i<=m;i++)
    {
        int a,b,c;
        cin>>a>>b>>c;
        if(check[b]==false)
        {
            childs++;
            total+=c;
            cost[b]=c;
            check[b]=true;
        }
        else
        {
            if(cost[b]>c)
            {
                total=total-cost[b]+c;
                cost[b]=c;
            }
        }
    }

    if(childs==n-1)
        cout<<total<<endl;
    else
        cout<<-1<<endl;
    return 0;
}


