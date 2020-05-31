
// Problem : C. Perform the Combo
// Contest : Codeforces Round #624 (Div. 3)
// URL : https://codeforces.com/problemset/problem/1311/C
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
		int n,m;
		string s;
		cin>>n>>m>>s;
		map< int,int > cnt;
		for(int i=0,temp;i<m;i++)
		{
			cin>>temp;
			cnt[temp-1]++;
		}
		int v=m+1;
		vi a(27);
		for(int i=0;i<n;i++)
		{
			a[s[i]-96]+=v;
			v-=cnt[i];
		}
		for(int i=1;i<=26;i++)
		{
			cout<<a[i]<<" ";
		}
		cout<<endl;
	}
    return 0;
}

