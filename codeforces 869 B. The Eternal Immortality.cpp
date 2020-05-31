
// Problem : B. The Eternal Immortality
// Contest : Codeforces - Codeforces Round #439 (Div. 2)
// URL : https://codeforces.com/contest/869/problem/B
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
	ull n,m,ans=1;
	cin>>n>>m;
	
		for(ull i=m;i>n;i--)
		{
		    ans=(ans*i)%10;
		    if(ans==0)
		        break;
		}
		cout<<ans<<endl;

    return 0;
}

