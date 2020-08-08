
// Problem : B. Applejack and Storages
// Contest : Codeforces - Codeforces Round #662 (Div. 2)
// URL : https://codeforces.com/contest/1393/problem/B
// Memory Limit : 256.000000 MB 
// Time Limit : 2000.000000 milisec   

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
	unordered_map<int,int> cnt;
	int four=0,two=0;
	for(int i=0;i<n;i++)
	{
		
		int num;
		cin>>num;
		four-=(cnt[num]/4);
		two-=(cnt[num]/2);
		cnt[num]++;
		four+=(cnt[num]/4);
		two+=(cnt[num]/2);
		
	}
	int q;
	cin>>q;
	while(q--)
	{
		char c;
		int num;
		cin>>c>>num;
		four-=(cnt[num]/4);
		two-=(cnt[num]/2);
		if(c=='+')
			cnt[num]++;
		else
			cnt[num]--;
		
		four+=(cnt[num]/4);
		two+=(cnt[num]/2);
		//cout<<four<<" "<<two<<endl;
		if(four && (four>1 || (two-2)>=2))
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
}
int main()
{
    KAMEHAMEHA
	int t=1;
	//cin>>t;
	for(int cn=1;cn<=t;cn++)
	{
		solve();
	}
    return 0;
}

