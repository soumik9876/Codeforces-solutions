
// Problem : Remove Smallest
// URL : http://m2.codeforces.com/contest/1399/problem/A
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
	int n;
	cin>>n;
	vi a(n);
	for(int i=0;i<n;i++)
		cin>>a[i];
	sort(all(a));
	for(int i=0;i<n-1;i++)	
	{
		if(a[i+1]-a[i]>1)
		{
			cout<<"NO"<<endl;
			return;
		}
	}
	cout<<"YES"<<endl;
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

