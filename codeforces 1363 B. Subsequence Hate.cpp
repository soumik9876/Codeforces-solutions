
// Problem : B. Subsequence Hate
// Contest : Codeforces - Codeforces Round #646 (Div. 2)
// URL : https://codeforces.com/problemset/problem/1363/B
// Memory Limit : 256.000000 MB 
// Time Limit : 1000.000000 milisec 
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
int main()
{
    KAMEHAMEHA
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		int total0=0,total1=0,cnt0=0,cnt1=0,mn=INT_MAX;
		for(auto i:s)
		{
			if(i=='0')
				total0++;
			else
				total1++;
		}
		for(auto i:s)
		{
			if(i=='0')
				cnt0++;
			else
				cnt1++;
			mn=min({mn,cnt0+total1-cnt1,cnt1+total0-cnt0});
		}
		cout<<mn<<endl;
	}
    return 0;
}

