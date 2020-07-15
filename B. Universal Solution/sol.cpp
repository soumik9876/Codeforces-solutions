//Author - Soumik Roy
//Date & Time - July 15, 2020 5:09 PM
//Problem name - B. Universal Solution
//Problem url - https://codeforces.com/problemset/problem/1380/B
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
	string s,ans;
	cin>>s;
	vi a(3);
	string trio="PSR";
	for(auto i : s)
	{
		if(i=='R')
			a[0]++;
		else if(i=='P')
			a[1]++;
		else
		{
			a[2]++;
		}
		
	}
	int mx=0,ind;
	for(int i=0;i<3;i++)
	{
		if(a[i]>mx)
		{
			mx=a[i];
			ind=i;
		}
	}
	for(auto i : s)
		ans+=trio[ind];
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

