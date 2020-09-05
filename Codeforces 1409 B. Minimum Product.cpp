//Author - Soumik Roy
//Date & Time - September 04, 2020 8:39 PM
//Problem name - B. Minimum Product
//Problem url - https://codeforces.com/contest/1409/problem/B
//Time limit - 1000 ms
//Memory Limit - 256 MB    

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
#define bug(x)				  cout<<"  [ "#x<<" = "<<x<<" ]"<<endl;
#define KAMEHAMEHA            ios_base::sync_with_stdio(0);
#define RASENGAN              ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int dir[]={0,1,0,-1,1,0,-1,0};
ll f(ll a,ll b,ll x,ll y,ll n)
{
	 ll t = min(n,a-x) ;
        n = n - t;
        a -= t;
        t = min(n,b-y) ;
        b -= t;
		ll r=a*b;
        return r;
}
void solve()
{
	ll a,b,x,y,n,ans=0,ans2=0;
	cin>>a>>b>>x>>y>>n;
	ans=min(f(a,b,x,y,n),f(b,a,y,x,n));
	cout<<ans<<endl;
	

}
int main()
{
    KAMEHAMEHA
	int test=1;
	cin>>test;
	for(int cn=1;cn<=test;cn++)
	{
		solve();
	}
    return 0;
}

