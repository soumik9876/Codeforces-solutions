
// Problem : A. Odd Selection
// Contest : Codeforces - Codeforces Round #646 (Div. 2)
// URL : https://codeforces.com/contest/1363/problem/0
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
	int t;
	cin>>t;
	while(t--)
	{
		int n,x,odd=0,even=0;
	
		cin>>n>>x;
		for(int i=0,temp;i<n;i++)
		{
			cin>>temp;
			if(temp%2)
				odd++;
			else
				even++;
		}
		int total=min(x+(x%2)-1,(odd+(odd%2)-1));
		if(x-total<=even && total>0)
			cout<<"Yes"<<endl;
		else
			cout<<"No"<<endl;
	}
    return 0;
	
}

