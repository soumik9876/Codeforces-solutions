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
    int a1,a2,k1,k2,n;
    cin>>a1>>a2>>k1>>k2>>n;
    int mn=((k1-1)*a1)+(k2-1)*a2;
    mn=max(0,n-mn);
    int mx=0;
    if(k1<=k2)
    {
        mx=min(a1,n/k1);
        mx+=min(a2,(n-(mx*k1))/k2);
    }
    else
    {
        mx=min(a2,n/k2);
        mx+=min(a1,(n-(mx*k2))/k1);
    }
    cout<<mn<< " "<<mx<<endl;
    return 0;
}


