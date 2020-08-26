//Author - Soumik Roy
//Date & Time - August 25, 2020 9:35 PM
//Problem name - C. Binary String Reconstruction
//Problem url - https://codeforces.com/contest/1400/problem/C
//Time limit - 2000 ms
//Memory Limit - 256 MB    

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
	string s;
	int x;
	cin>>s>>x;
	int sz=s.size();
	string ans(sz,'1');

	for(int i=0;i<sz;i++)
	{
		if(s[i]=='0')
		{
			if(i>=x)
				ans[i-x]='0';
			if(i<=sz-x-1)
				ans[i+x]='0';
		}
	}
	bool val=true;
	for(int i=0;i<sz;i++)
	{
		if(s[i]=='1')
		{
			if(i>=x && ans[i-x]=='1')
				continue;
			if(i<=sz-x-1 && ans[i+x]=='1')
				continue;
			else
			{
				val=false;
				break;
			}
			

		}
	}
	if(val)
		cout<<ans<<endl;
	else
	{
		cout<<-1<<endl;
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

