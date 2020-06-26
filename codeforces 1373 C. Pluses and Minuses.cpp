
// Problem : C. Pluses and Minuses
// Contest : Codeforces - Educational Codeforces Round 90 (Rated for Div. 2)
// URL : https://codeforces.com/contest/1373/problem/C
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
	string s;
	cin>>s;
	ll ssize=s.size(),cur=1,total=0,val=0;
	bool check=true;
	for(int i=0;i<ssize;i++)
	{
		if(s[i]=='-')
			val--;
		else
			val++;
		if(-val>=cur)
		{
			cur++;
			total+=(i+1);
		}
		
	}
	total+=ssize;
	cout<<total<<endl;
}
int main()
{
    KAMEHAMEHA
	int t=1;
	cin>>t;
	while(t--)
	{
		solve();
	}
    return 0;
}

