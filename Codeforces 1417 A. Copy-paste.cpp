//Author - Soumik Roy
//Date & Time - September 28, 2020 4:35 PM
//Problem name - A. Copy-paste
//Problem url - https://codeforces.com/contest/1417/problem/A
//Time limit - 1000 ms
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
	int n,k,mn=INT_MAX;
	cin>>n>>k;
	vi a(n);
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		mn = min(mn,a[i]);
	}
	int total = 0;
	sort(all(a));
	for(int i=0;i<n;i++)
	{
		int diff = k-a[i];
		if(i)
			total += (diff/a[0]);
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

