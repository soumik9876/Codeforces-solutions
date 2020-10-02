//Author - Soumik Roy
//Date & Time - September 30, 2020 9:44 PM
//Problem name - B. Make Them Equal
//Problem url - https://codeforces.com/problemset/problem/1416/B
//Time limit - 1000 ms
//Memory Limit - 256 MB    
//Parsed with ai-virtual-assistant https://github.com/Saurav-Paul/AI-virtual-assistant-python

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
struct actions{
	int i,j,x;
};
void solve()
{
	ll n,sum=0;
	cin>>n;
	vi a(n+1);
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		sum += a[i];
	}
	if(sum%n)
	{
		cout<<-1<<endl;
		return;
	}
	vector<actions> ans;
	for(int i=2;i<=n;i++)
	{
		actions act;
		act.i = 1,act.j = i,act.x = i-(a[i]%i);
		ans.eb(act);
		if(a[i]%i==0)
			ans.pop_back();
		act.i = i,act.j = 1,act.x = a[i]/i;
		act.x += (a[i]%i)? 1 : 0;
		ans.eb(act);
	}	
	ll div = sum/n;
	for(int i=2;i<=n;i++)
	{
		actions act;
		act.i = 1,act.j=i,act.x = div;
		ans.eb(act);
	}
	cout << ans.size() << endl;
	for(auto s: ans)
		cout<<s.i<<" "<<s.j<<" "<<s.x<<endl;
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

