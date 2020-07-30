
// Problem : B. Array Walk
// Contest : Codeforces - Educational Codeforces Round 92 (Rated for Div. 2)
// URL : https://codeforces.com/contest/1389/problem/B
// Memory Limit : 256.000000 MB 
// Time Limit : 2000.000000 milisec   

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
void solve()
{
	int n,k,z;
	cin>>n>>k>>z;
	vi a(n+1),cs(n+1);
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		cs[i]=a[i]+cs[i-1];
	}
	ll ind,mx=0;
	for(int i=1;i<=k;i++)
	{
		ll repeat=min(z,(k-i+1)/2);
		ll extra=repeat*(a[i]+a[i+1]);
		ll end=k+1-(2*repeat);
		ll sum=cs[end]+extra;
		mx=max(sum,mx);
	}
	cout<<mx<<endl;
}
int main()
{
    KAMEHAMEHA
	int t=1;
	cin>>t;
	for(int cn=1;cn<=t;cn++)
	{
		solve();
	}
    return 0;
}

