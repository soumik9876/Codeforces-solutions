
// Problem : C. Nastya and Strange Generator
// Contest : Codeforces - Codeforces Round #637 (Div. 2) - Thanks, Ivan Belonogov!
// URL : https://codeforces.com/contest/1341/problem/C
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
	int t,n;
	
	cin>>t;
	while(t--)
	{
		cin>>n;
		vi a;
		for(int i=1,temp;i<=n;i++)
		{
			cin>>temp;
			a.eb(temp);
		}
		bool check=true;
		for(int i=0;i<n-1;i++)
		{
			if(a[i+1]-a[i]>1)
				check=false;
		}
		if(check)
			cout<<"Yes"<<endl;
		else
			cout<<"No"<<endl;
	}
    return 0;
}

