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
    int one=0,zero=0,n;
    string s;
    cin>>n>>s;
    for(auto i:s)
    {
        if(i=='z')
            zero++;
        else if(i=='n')
            one++;
    }
    while(one--)
    {
        if(one==0 && zero==0)
            cout<<1;
        else
            cout<<1<< " ";
    }
    while(zero--)
    {
        if(zero==0)
            cout<<0;
        else
            cout<<0 << " ";
    }
    cout<<endl;
    return 0;
}


