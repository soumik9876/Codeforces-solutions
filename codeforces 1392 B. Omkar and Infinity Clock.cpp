//Author - Soumik Roy
//Date & Time - August 17, 2020 4:42 PM
//Problem name - B. Omkar and Infinity Clock
//Problem url - http://codeforces.com/problemset/problem/1392/B
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
#define bug(x)				        cout<<"  [ "#x<<" = "<<x<<" ]"<<endl;
#define KAMEHAMEHA            ios_base::sync_with_stdio(0);
#define RASENGAN              ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
void solve()
{
	ll n,k,mx=-INT_MAX;
	cin>>n>>k;
	vll a(n);
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		mx=max(mx,a[i]);
	}
	vll a1(n),a2(n);
	ll cnt=1,mx1=-INT_MAX;
	for(int i=0;i<n;i++)
	{
		a1[i]=mx-a[i];
		mx1=max(mx1,a1[i]);
	}
	for (int i = 0; i < n; i++)
	{
		a2[i]=mx1-a1[i];
	}
 
	a=a2;
	if(k&1)
		a=a1;
	for(int i=0;i<n;i++)
		cout<<a[i]<< " ";
	cout<<endl;
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
