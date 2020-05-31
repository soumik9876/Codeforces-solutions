// Problem : B. Construct the String
// Contest : Codeforces - Codeforces Round #634 (Div. 3)
// URL : https://codeforces.com/problemset/problem/1335/B?fbclid=IwAR0utEz_D9IuoOnGXY6_mtnjTufV86bawI5EZo9NzbE0s6DqpNe-7nE-8pc
// Memory Limit : 0.000000 MB 
// Time Limit : 0.000000 milisec 

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
		int n,a,b,cnt=0;
		cin>>n>>a>>b;
		char c='a';
		for(int i=1;i<=n;i++)
		{
			char ch=c+cnt;
			cout<<ch;
			cnt++;
			if(cnt==b)
				cnt=0;
		}
		cout<<endl;
	}
    return 0;
}

