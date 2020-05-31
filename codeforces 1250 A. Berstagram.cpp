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
    cin>>m>>n;
    vi pos(m+1),post(m+1),mx(m+1),mn(m+1);
    for(int i=1;i<=m;i++)
    {
        pos[i]=i;
        post[i]=i;
        mn[i]=i;
        mx[i]=i;
    }
    for(int i=1;i<=n;i++)
    {
        int like;
        cin>>like;
        int position=post[like];
        if(position!=1)
        {
            post[pos[position-1]]=position;
            post[like]=position-1;
            mn[like]=min(mn[like],position-1);
            mx[pos[position-1]]=max(mx[pos[position-1]],position);
            swap(pos[position],pos[position-1]);

        }

    }
    for(int i=1;i<=m;i++)
    {
        cout<<mn[i]<< " "<<mx[i]<<endl;
    }
    return 0;
}


