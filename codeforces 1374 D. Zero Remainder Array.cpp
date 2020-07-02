
// Problem : D. Zero Remainder Array
// Contest : Codeforces - Codeforces Round #653 (Div. 3)
// URL : https://codeforces.com/contest/1374/problem/D
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
	ll n,k;
	cin>>n>>k;
	vll comp;
	map<int,int> cnt;
	for(int i=0,temp;i<n;i++)
	{
		cin>>temp;
		
		if(temp%k)
			cnt[k-(temp%k)]++;
	}
	//sort(all(comp));
	ll op=0;
	bool check=true;
	while(check)
	{
		check=false;
	for(auto i: cnt)
	{
		if(i.S==0)
			continue;
		else
			check=true;
		cnt[i.F]--;
		//cout<<i.F<<" "<<i.S<<endl;
		ll num=i.F;
		if(op%k<=num)
			op+=(num-(op%k)+1);
		else
		{
			op+=(k-(op%k)+num+1);
		}
		//cout<<op<<" "<<op%k<<" "<<num<<endl;
	}
	//check=false;
	}
	//for(auto i:cnt)
		//cout<<i.F<<" "<<i.S<<endl;
	cout<<op<<endl;
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

