
// Problem : B. Infinite Prefixes
// Contest : Educational Codeforces Round 81 (Rated for Div. 2)
// URL : https://codeforces.com/contest/1295/problem/B
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
	int n,x,bal=0;
	cin>>n>>x;
	string s;
	cin>>s;
	for(auto i: s)
	{
		if(i=='0')
			bal++;
		else
			bal--;
	}
	int diff=bal,cnt=0;
	if(bal==0)
	{
		bal=0;
		for(auto i: s)
		{
			if(i=='0')
				bal++;
			else
				bal--;
			if(bal==x)
			{
				cout<<-1<<endl;
				return ;
			}
		}
		
		cout<<0<<endl;
		return ;
		
	}
	
	bal=0;
	int k=(x-bal)/diff,ssize=s.size();
	if((x-bal)%diff==0 && k>=0)
		cnt++;
	for(int i=0;i<ssize-1;i++)
	{
		if(s[i]=='0')
			bal++;
		else
			bal--;
		k=(x-bal)/diff;
		if((x-bal)%diff==0 && k>=0)
			cnt++;
	}
	cout<<cnt<<endl;
}
int main()
{
    KAMEHAMEHA
//    #ifdef _soumik
//        freopen("input.txt", "r", stdin);
//    #endif
	int t;
	cin>>t;
	while(t--)
	{
		
		solve();
	}
    return 0;
}

