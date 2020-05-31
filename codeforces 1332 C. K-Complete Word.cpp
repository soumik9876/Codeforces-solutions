
// Problem : C. K-Complete Word
// Contest : Codeforces Round #630 (Div. 2)
// URL : https://codeforces.com/contest/1332/problem/C
// Memory Limit : 512.000000 MB 
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
int main()
{
    KAMEHAMEHA
//    #ifdef _soumik
//        freopen("input.txt", "r", stdin);
//    #endif
	int test;
	cin>>test;
	while(test--)
	{
		int n,k;
		cin>>n>>k;
		string s,t(k,'.');
		cin>>s;
		vector< vector < int > > cnt(k,vi (27));
		for(int i=0;i<n;i++)
		{
			int temp=s[i]-96;
			cnt[i%k][temp]++;
		}
		for(int i=0;i<k;i++)
		{
			int mx=0,c;
			for(int j=1;j<27;j++)
			{
				int t=cnt[i][j]+cnt[k-i-1][j];
				if(t>mx)
				{
					mx=t;
					c=j;
				}
			}
			t[i]=t[k-i-1]=c+96;
		}
		int v=0;
		for(int i=0;i<n;i++)
		{
			if(s[i]!=t[i%k])
				v++;
		}
		cout<<v<<endl;
	}
    return 0;
}

