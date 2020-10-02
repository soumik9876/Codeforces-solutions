//Author - Soumik Roy
//Date & Time - October 02, 2020 1:05 PM
//Problem name - D. Non-zero Segments
//Problem url - https://codeforces.com/contest/1426/problem/D
//Time limit - 2000 ms
//Memory Limit - 256 MB    
//Parsed with ai-virtual-assistant https://github.com/Saurav-Paul/AI-virtual-assistant-python

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
void solve()
{
	int n;
	cin>>n;
	vi a(n);
	for(int i=0;i<n;i++)
		cin>>a[i];
	ll sum=0,ans=0;
	unordered_set<ll> exists;
	exists.insert(0);
	for(int i=0;i<n;i++)
	{
		sum += a[i];
		if(exists.find(sum) != exists.end())
		{
			sum = a[i];
			exists.clear();
			exists.insert(0);
			ans++;
		}
		exists.insert(sum);
	}
	cout<<ans<<endl;
}
int main()
{
    KAMEHAMEHA
	int t=1;
	// cin>>t;
	for(int cn=1;cn<=t;cn++)
	{
		solve();
	}
    return 0;
}

