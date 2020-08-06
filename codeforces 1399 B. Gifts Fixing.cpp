
// Problem : B. Gifts Fixing
// Contest : Codeforces - Codeforces Round #661 (Div. 3)
// URL : https://codeforces.com/contest/1399/problem/B
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
	int n,mina=INT_MAX,minb=INT_MAX;
	cin>>n;
	vi a(n),b(n);
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		mina=min(mina,a[i]);
	}
	for(int i=0;i<n;i++)
	{
		cin>>b[i];
		minb=min(minb,b[i]);
	}
	ll total=0;
	for(int i=0;i<n;i++)
	{
		int diff=max(a[i]-mina,b[i]-minb);
		total+=diff;
	}
	cout<<total<<endl;
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

