//Author - Soumik Roy
//Date & Time - August 20, 2020 12:10 AM
//Problem name - C. Good Subarrays
//Problem url - https://codeforces.com/problemset/problem/1398/C
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
	string s;
	cin>>n>>s;
	map<int,int> cnt;
	cnt[0]++;
	ll sum=0,total=0;
	for(int i=0;i<n;i++)
	{
		sum+=(s[i]-'0')-1;
		total+=cnt[sum];
		cnt[sum]++;
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

