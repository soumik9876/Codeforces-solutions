
// Problem : B. Food Buying
// Contest : Codeforces Round #617 (Div. 3)
// URL : https://codeforces.com/contest/1296/problem/B
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
	int t;
	cin>>t;
	while(t--)
	{
		ll n,sum=0,temp=0;
		cin>>n;
		while(n/10)
		{
			//cout<<n<<" "<<sum<<" "<<temp<<endl;
			int num=n-(n%10);
			sum+=num;
			n=(n%10)+(n/10);
			
		}
		sum+=(n%10);
		cout<<sum<<endl;
	}
    return 0;
}

