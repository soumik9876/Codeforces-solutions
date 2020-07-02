
// Problem : C. A Cookie for You
// Contest : Codeforces - Codeforces Round #654 (Div. 2)
// URL : https://codeforces.com/contest/1371/problem/C
// Memory Limit : 256.000000 MB 
// Time Limit : 1000.000000 milisec 
  

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
	ll a,b,n,m;
	cin>>a>>b>>n>>m;
	ll mn=min(a,b);
	if(mn<m)
		cout<<"No"<<endl;
	else
	{
		ll left=(a+b)-m;
		if(left<n)
			cout<<"No"<<endl;
		else
			cout<<"Yes"<<endl;
	}
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

