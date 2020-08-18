//Author - Soumik Roy
//Date & Time - August 17, 2020 2:34 PM
//Problem name - C. Omkar and Waterslide
//Problem url - http://codeforces.com/contest/1392/problem/C
//Time limit - 2000 ms
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
void solve()
{
	int n;
	cin>>n;
	vll a(n);
	for(int i=0;i<n;i++)
		cin>>a[i];
	ll ans=0;
	for(int i=n-1;i>0;i--)
	{
		ans+=max(a[i-1]-a[i],0LL);
	}
	cout<<ans<<endl;
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
