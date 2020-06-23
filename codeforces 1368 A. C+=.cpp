
// Problem : A. C+=
// Contest : Codeforces - Codeforces Global Round 8
// URL : https://codeforces.com/contest/1368/problem/A
// Memory Limit : 512.000000 MB 
// Time Limit : 2000.000000 milisec 
// Powered by CP Editor (https://github.com/coder3101/cp-editor)

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
	ll a,cnt=0,b,n;
	cin>>a>>b>>n;
	while(max(a,b)<=n)
	{
		if(a<b)
			a+=b;
		else
			b+=a;
		cnt++;
	}
	cout<<cnt<<endl;
}
int main()
{
    KAMEHAMEHA
	int t=1;
	cin>>t;
	while(t--)
	{
		solve();
	}
    return 0;
}

