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
#define tcase()               ll t,n; cin>>t;n=t; while(t--)
#define iscn(num)             scanf("%d",&num);
#define eb                    emplace_back
#define ull                   unsigned long long
#define KAMEHAMEHA            ios_base::sync_with_stdio(0);
#define RASENGAN              ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
void solve()
{
    int n,m,k,temp,a;
    bool check=true;
    cin>>n>>m>>k;
    cin>>temp,n--;
    while(n--)
    {
        cin>>a;
        //cout<<temp<< " "<<a<< " "<<m<<endl;
        if(temp>=a)
        {
            m+=min(temp,(temp-(a-k)));
        }
        else
        {
            m+=min(temp,k-(a-temp));
        }
        if(m<0)
            check=false;
        temp=a;
    }
    if(check)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
int main()
{
    KAMEHAMEHA
//    #ifdef _soumik
//        freopen("input.txt", "r", stdin);
//    #endif
    ll t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}


