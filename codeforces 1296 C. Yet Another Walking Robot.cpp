
// Problem : C. Yet Another Walking Robot
// Contest : Codeforces Round #617 (Div. 3)
// URL : https://codeforces.com/contest/1296/problem/C
// Memory Limit : 256.000000 MB 
// Time Limit : 1000.000000 milisec 

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
		int n;
		string s;
		cin>>n>>s;
		map< pii, int > pos;
		pos[mp(0,0)]=0;
		int ssize=s.size(),x=0,y=0,mn=1e9,l=-1,r=-1;
		for(int i=0;i<ssize;i++)
		{
			if(s[i]=='L')
				x--;
			else if(s[i]=='R')
				x++;
			else if(s[i]=='U')
				y++;
			else
				y--;
			if(pos.count(mp(x,y)))
			{
				//cout<<i<<" "<<pos[mp(x,y)]<<" "<<x<<" "<<y<<" "<<mn<<endl;
				//cout<<l<<" "<<r<<endl;
				if(i-pos[mp(x,y)]+1<mn)
				{
					mn=i+1-pos[mp(x,y)];
					l=pos[mp(x,y)],r=i+1;
				}
				
			}
			pos[mp(x,y)]=i+1;
		}
		if(l!=-1)
			cout<<l+1<<" "<<r<<endl;
		else
			cout<<-1<<endl;
	}
    return 0;
}

