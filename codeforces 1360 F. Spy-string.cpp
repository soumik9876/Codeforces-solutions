
// Problem : F. Spy-string
// Contest : Codeforces - Codeforces Round #644 (Div. 3)
// URL : https://codeforces.com/problemset/problem/1360/F
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
int n,m;
bool ok(string s,string t[])
{
	for(int i=1;i<n;i++)
	{
		int cnt=0;
		for(int j=0;j<m;j++)
		{
			if(s[j]!=t[i][j])
				cnt++;
		}
		if(cnt>1)
			return false;
	}
	return true;
}
int main()
{
    KAMEHAMEHA
//    #ifdef _soumik
//        freopen("input.txt", "r", stdin);
//    #endif
	int t;
	cin>>t;
	while(t--)
	{
		
		cin>>n>>m;
		string s[n];
		for(int i=0;i<n;i++)
			cin>>s[i];
		string ans=s[0];
		bool check=false;
		for(int i=0;i<m;i++)
		{
			for(int j=0;j<n;j++)
			{
				ans[i]=s[j][i];
				if(ok(ans,s))
				{
					check=true;
					break;
				}
			}
			if(check)
				break;
			ans[i]=s[0][i];
		}
		if(check)
			cout<<ans<<endl;
		else
			cout<<-1<<endl;
	}
    return 0;
}

