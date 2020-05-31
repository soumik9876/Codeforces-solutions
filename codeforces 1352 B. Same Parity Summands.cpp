
// Problem : B. Same Parity Summands
// Contest : Codeforces - Codeforces Round #640 (Div. 4)
// URL : https://codeforces.com/contest/1352/problem/B
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
		int n,k;
		cin>>n>>k;
		vi a;
		if(n%2)
		{
			if(k%2==0 || k>n)
				cout<<"NO"<<endl;
			else
			{
				cout<<"YES"<<endl;
				cout<<n-k+1;
				for(int i=1;i<k;i++)
					cout<<" "<<1;
				cout<<endl;
			}
		}
		else
		{
			if(k>n || (k>n/2 && (k%2)))
				cout<<"NO"<<endl;
			else
			{
				cout<<"YES"<<endl;
				if(k<=(n/2))
				{
					cout<<n-(k-1)*2;
					for(int i=1;i<k;i++)
						cout<<" "<<2;
					cout<<endl;
				}
				else
				{
					cout<<n-k+1;
					for(int i=1;i<k;i++)
						cout<<" "<<1;
					cout<<endl;
				}
			}
		}
	}
    return 0;
}

