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
    int t;
    cin>>t;
    while(t--)
    {
        int n;

        cin>>n;
        vector< int > num(n+5);
        for(int i=1,temp;i<=n;i++)
        {
            cin>>temp;
            num[temp]=i;
        }
        int low=INT_MAX,high=0;
        for(int i=1;i<=n;i++)
        {
            low=min(low,num[i]);
            high=max(high,num[i]);
            if(i>high-low)
                cout<<1;
            else
                cout<<0;
        }
        cout<<endl;
    }
    return 0;
}


