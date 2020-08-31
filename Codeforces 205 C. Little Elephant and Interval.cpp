//Author - Soumik Roy
//Date & Time - August 31, 2020 10:00 AM
//Time limit - 2000 ms
//Memory Limit - 262 MB    
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
ll totalcomb(ll n)
{
	ll ans=9;
	if(n<=9) return n;
	ans+=(n/10);
	ll num=n,digit;
	while(num)
	{
		digit=num%10;
		num/=10;
	}
	if(digit>(n%10))
		ans--;
	return ans;
}
void solve()
{
	ll l,r;
	cin>>l>>r;
	l--;
	ll lval=totalcomb(l),rval=totalcomb(r);
	ll ans=rval-lval;
	cout<<ans<<endl;
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
