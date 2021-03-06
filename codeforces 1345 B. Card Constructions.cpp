
// Problem : B. Card Constructions
// Contest : Codeforces - Codeforces Round #639 (Div. 2)
// URL : https://codeforces.com/contest/1345/problem/B
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
		ll n;
		cin>>n;
		ll num=n,cnt=0;
		ll pos=(-1+sqrt(1+24*n))/6;
		if(pos)
			cnt++;
		
		num=num-(3*pos*pos+pos)/2;
		//cout<<pos<<" "<<num<<endl;
		while(pos)
		{
			//break;
			//cout<<pos<<" "<<num<<endl;
			
			pos=(-1+sqrt(1+24*num))/6;
			num=num-(3*pos*pos+pos)/2;
			if(pos)
				cnt++;
		}
		cout<<cnt<<endl;
	}
    return 0;
}

