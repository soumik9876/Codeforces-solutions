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
    ll n,k;
    vi a;
    cin>>n>>k;
    map <int,int> occurence,extraneed;
    for(int i=0,temp;i<n;i++)
    {
        cin>>temp;
        a.eb(temp);
    }
    sort(all(a));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<18;j++)
        {
            int num=a[i]/pow(2,j);
            if(num<=0)
                break;
            if(occurence[num]==k)
                continue;
            occurence[num]++;
            extraneed[num]+=j;
        }
    }
    int mn=INT_MAX;
    for(auto i:occurence)
    {
        if(i.S==k)
            mn=min(mn,extraneed[i.F]);
    }
    cout<<mn<<endl;
    return 0;
}


