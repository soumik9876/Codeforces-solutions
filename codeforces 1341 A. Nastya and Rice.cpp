
// Problem : A. Nastya and Rice
// Contest : Codeforces - Codeforces Round #637 (Div. 2) - Thanks, Ivan Belonogov!
// URL : https://codeforces.com/contest/1341/problem/0
// Memory Limit : 0.000000 MB 
// Time Limit : 0.000000 milisec 
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
		int n,a,b,c,d;
		cin>>n>>a>>b>>c>>d;
		if(n*(a+b)<c-d || n*(a-b)>c+d)
			cout<<"No"<<endl;
		else
			cout<<"Yes"<<endl;
	}
    return 0;
}

