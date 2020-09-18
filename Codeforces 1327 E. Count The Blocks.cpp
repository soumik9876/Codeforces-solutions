//Author - Soumik Roy
//Date & Time - September 18, 2020 2:05 PM
//Problem name - E. Count The Blocks
//Problem url - https://codeforces.com/contest/1327/problem/E
//Time limit - 2000 ms
//Memory Limit - 256 MB    

#include<bits/stdc++.h>
#define ll                    long long int
#define pb                    push_back
#define F                     first
#define S                     second
#define mp                    make_pair
#define MOD                   998244353 
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
ll bigmod(ll n,ll p)
{
	if(p==0 ) return 1;
	ll x=bigmod(n,p/2);
	x=(x*x)%MOD;
	if(p&1) x=(x*n)%MOD;
	return x;
}
void solve()
{
	ll n;
	cin>>n;
	for(int i=1;i<n;i++)
	{
		ll ans=(2*10*9*bigmod(10,n-i-1))%MOD;
		ll temp=((n-i-1)*10*9*9*bigmod(10,n-i-2))%MOD;
		ans=(ans+temp)%MOD;
		cout<<ans<<" ";
	}
	cout<<10<<endl;
}
int main()
{
    KAMEHAMEHA
	int t=1;
	for(int cn=1;cn<=t;cn++)
	{
		solve();
	}
    return 0;
}

