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
    int t,n;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>n>>s;
        int mx=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='1')
                mx=max({mx,i+1,n-i});
        }
        if(mx==0)
            cout<<n<<endl;
        else
            cout<<2*mx<<endl;
    }
    return 0;
}


