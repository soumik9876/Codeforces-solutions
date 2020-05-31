
// Problem : B. Lucky Substring
// Contest : Codeforces Beta Round #91 (Div. 2 Only)
// URL : https://codeforces.com/contest/122/problem/B?fbclid=IwAR1ChgmU-eGqHXv3VQk53siM80IGfchhKXTU_3B4R5byi_0STOnrkvOVM9k
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
	string s;
	cin>>s;
	int four=0,seven=0;
	for(auto i:s)
	{
		if(i=='4')
			four++;
		else if(i=='7')
			seven++;
	}
	if(!four && !seven)
		cout<<-1<<endl;
	else if(four>=seven)
		cout<<4<<endl;
	else
		cout<<7<<endl;
    return 0;
}

