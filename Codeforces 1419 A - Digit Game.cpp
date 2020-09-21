//Author - Soumik Roy
//Date & Time - September 20, 2020 9:00 AM
//Problem name - A - Digit Game
//Time limit - 1000 ms
//Memory Limit - 262 MB    
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
void solve()
{
	int n;
	cin>>n;
	string s;
	cin>>s;
	int odd1=0,odd2=0,even=0;
	for(int i=0;i<n;i+=2)
	{
		int d=s[i]-'0';
		if(d%2)
			odd1++;
	}
	for(int i=1;i<n;i+=2)
	{
		int d=s[i]-'0';
		if(d%2==0)
			even++;
	}
	if(n%2)
	{
		if(odd1)
			cout<<1<<endl;
		else
		{
			cout<<2<<endl;
		}
		
		return;
	}
	if(n%2==0 && even)
	{
		cout<<2<<endl;
		return;
	}
	cout<<1<<endl;
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

