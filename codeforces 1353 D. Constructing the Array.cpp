
// Problem : D. Constructing the Array
// Contest : Codeforces - Codeforces Round #642 (Div. 3)
// URL : https://codeforces.com/contest/1353/problem/D
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
		int n;
		cin>>n;
		vi ans(n+1);;
		map<int , vector< pii > > main;
		main[n].eb(1,n);
		int cnt=1;
	
		set<int,greater<int>> range;
		range.insert(n);
		for(auto i:range)
		{
			sort(all(main[i]));
			int temp=i;
			for(auto i: main[temp])
			{
				int mid=(i.F+i.S)/2;
				ans[mid]=cnt++;
				if(mid-i.F)
				{
					main[mid-i.F].eb(i.F,mid-1);
					
				}
				if(i.S-mid)
				{
					main[i.S-mid].eb(mid+1,i.S);
				}
				range.insert(mid-i.F);
				range.insert(i.S-mid);
				//largest=max(mid-i.F,i.S-mid);
			}
			
		}
		for(int i=1;i<=n;i++)
			cout<<ans[i]<<" ";
		cout<<endl;
	}
    return 0;
}

