
// Problem : B. AccurateLee
// Contest : Codeforces - Codeforces Round #652 (Div. 2)
// URL : https://codeforces.com/contest/1369/problem/B
// Memory Limit : 256.000000 MB 
// Time Limit : 2000.000000 milisec 
// Powered by CP Editor (https://github.com/coder3101/cp-editor)  

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
	string s,ans,temp;
	cin>>n>>s;
	bool check1=false,check2=false;
	int i=0,j=0,cnt=0,cnt1=0;
	while(j<n)
	{
		if(s[j]=='1')
		{
			check1=true;
			cnt++;
		}
		if(s[j]=='0') 
		{
			
			if(!check1)
			{
				cnt1++;
			}
			else if(!check2)
			{
				cnt1++;
				check2=true;
			}
			cnt=0;
		}
		j++;
	}
	for(int i=0;i<cnt1;i++)
		ans+='0';
	
	for(int i=0;i<cnt;i++)
		ans+='1';
	cout<<ans<<endl;
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

