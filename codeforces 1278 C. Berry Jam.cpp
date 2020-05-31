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
int mn=INT_MAX;
int ans(int left,int right,vi &a,map< pii,int > &dp,int one,int two)
{
    if(dp.find(mp(left,right))!=dp.end())
        return dp[mp(left,right)];
    if(one==two)
    {
        mn=min(mn,right-left-1);
        return dp[mp(left,right)]=mn;
    }
    if(left<0 || right>=a.size())
        return INT_MAX;
    int l,r;
    if(a[left]==1)
        l=ans(left-1,right,a,dp,one-1,two);
    else
        r=ans(left-1,right,a,dp,one,two-1);
    if(a[right]==1)
        l=ans(left,right+1,a,dp,one-1,two);
    else
        r=ans(left,right+1,a,dp,one,two-1);
    return dp[mp(left,right)]=min(l,r);
}
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
        vi a;
        map< pii,int > dp;
        int one=0,two=0;
        mn=INT_MAX;
        for(int i=0,temp;i<2*n;i++)
        {
            cin>>temp;
            a.eb(temp);
            if(temp==1) one++;
            else two++;
        }
        int d=ans(n-1,n,a,dp,one,two);
        cout<<d<<endl;
    }
    return 0;
}


