//Author - Soumik Roy
//Date & Time - June 23, 2020 1:20 PM
//Problem name - E. Binary Subsequence Rotation
//Problem url - https://codeforces.com/problemset/problem/1370/E
//Time limit - 2000 sec
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
void solve()
{
	int n;
	string s,t;
	cin>>n>>s>>t;

	int one=0,mone=0,mx=0,tone=0;
	//cout<<s<<endl<<t<<endl;
	for(int i=0;i<n;i++)
	{
		if(s[i]=='1' && t[i]=='1')
			continue;
		if(s[i]=='1')
		{
			one++,mone=max(mone-1,0);
			tone++;
		}
		if(t[i]=='1')
		{
			tone--;
			one=max(one-1,0),mone++;
		}
		mx=max({mx,one,mone});
	}
	//cout<<tone<<endl;
	if(tone)
		cout<<-1<<endl;
	else
		cout<<mx<<endl;
}
int main()
{
    KAMEHAMEHA
	int t=1;
	//cin>>t;
	while(t--)
	{
		solve();
	}
    return 0;
}

