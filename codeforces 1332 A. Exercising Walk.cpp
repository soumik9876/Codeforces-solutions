
// Problem : A. Exercising Walk
// Contest : Codeforces Round #630 (Div. 2)
// URL : https://codeforces.com/contest/1332/problem/0
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
	int t;
	cin>>t;
	while(t--)
	{
		ll a,b,c,d,x,y,x1,y1,x2,y2;
		cin>>a>>b>>c>>d>>x>>y>>x1>>y1>>x2>>y2;
		if(x-x1<a-b || x2-x<b-a || y-y1<c-d || y2-y<d-c)
			cout<<"No"<<endl;
		else if((x1==x2 && (a || b)) || (y1==y2 && (c || d)))
			cout<<"No"<<endl;
		else
			cout<<"Yes"<<endl;
	}
    return 0;
}

