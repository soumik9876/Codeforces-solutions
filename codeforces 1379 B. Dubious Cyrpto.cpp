//Author - Soumik Roy
//Date & Time - August 02, 2020 12:48 PM
//Problem name - B. Dubious Cyrpto
//Problem url - https://codeforces.com/problemset/problem/1379/B
//Time limit - 1000 ms
//Memory Limit - 512 MB    

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
	ll l,r,m,a,b,c;
	cin>>l>>r>>m;
	for(a=l;a<=r;a++)
	{
	ll mod=m%a;
	c=r,b=c-a+mod;
	if(b<l)
	{
		b=r,c=b-mod;
	}
	if(c>=l)
		break;
	}
	cout<<a<<" "<<b<<" "<<c<<endl;
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

