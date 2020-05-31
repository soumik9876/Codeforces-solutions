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
    int n;
    vi a,b;
    cin>>n;
    int pos[n+1],changed[n+1];
    for(int i=0,temp;i<n;i++)
    {
        cin>>temp;
        a.eb(temp);
        pos[a[i]]=i+1;
    }


    for(int i=0,temp;i<n;i++)
    {
        cin>>temp;
        b.eb(temp);
        changed[pos[temp]]=i+1;
    }
    int mx=changed[1],cnt=0;
    for(int i=0;i<=n;i++)
        cout<<pos[i]<< " "<<changed[i]<<endl;
    for(int i=1;i<=n;i++)
    {
        if(changed[i]<mx)
            cnt++;
        mx=max(mx,changed[i]);
    }
    cout<<cnt<<endl;
    return 0;
}


