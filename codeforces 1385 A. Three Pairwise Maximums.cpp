
// Problem : A. Three Pairwise Maximums
// Contest : Codeforces - Codeforces Round #656 (Div. 3)
// URL : https://codeforces.com/contest/1385/problem/0
// Memory Limit : 256.000000 MB 
// Time Limit : 1000.000000 milisec 
   

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
	ll x,y,z,a=0,b=0,c=0;
	cin>>x>>y>>z;
	if(x==y)
	{
		a=x;
	}
	if(x==z)
	{
		b=x;
	}
	if(y==z)
	{
		c=z;
	}
	if(a==0)
		a=min(x,y);
	if(b==0) b=min(x,z);
	if(c==0) c=min(y,z);
	//cout<<a<<" "<<b<<" "<<c<<endl;
	if(max(a,b)!=x || max(b,c)!=z || max(a,c)!=y)
		cout<<"NO"<<endl;
	else
	{
		cout<<"YES"<<endl;
		cout<<a<<" "<<b<<" "<<c<<endl;
	}
	
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

