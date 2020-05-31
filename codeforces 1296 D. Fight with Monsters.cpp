
// Problem : D. Fight with Monsters
// Contest : Codeforces Round #617 (Div. 3)
// URL : https://codeforces.com/contest/1296/problem/D
// Memory Limit : 256.000000 MB 
// Time Limit : 1000.000000 milisec 
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
	ll n,a,b,k;
	cin>>n>>a>>b>>k;
	vi v;
	for(int i=0,temp;i<n;i++)
	{
		cin>>temp;
		int m=temp%(a+b);
		if(m>0)
		{
			m=max(0LL,m-a);
			v.eb(m);
		}
		else
			v.eb(b);
	}
	sort(all(v));
	int cnt=0;
	for(int i=0;i<v.size();i++)
	{
		//cout<<v[i]<<" "<<cnt<<" "<<a<<endl;
		if(v[i]==0)
		{
			cnt++;
			continue;
		}
		int t=ceil((double)v[i]/a);
		//cout<<k<<" "<<t<<endl;
		if(t<=k)
		{
			cnt++;
			k-=t;
			
		}
		
	}
	cout<<cnt<<endl;
    return 0;
}

