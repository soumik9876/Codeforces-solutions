
// Problem : B. Composite Coloring
// Contest : Codeforces Round #630 (Div. 2)
// URL : https://codeforces.com/contest/1332/problem/B
// Memory Limit : 512.000000 MB 
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
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vi a;
		for(int i=0,temp;i<n;i++)
		{
			cin>>temp;
			a.eb(temp);
		}
		vi col(n);
		int cnt=1;
		for(int i=2;i*i<=1000;i++)
		{
			int c=0;
			for(int j=0;j<n;j++)
			{
				if(!col[j])
				{
					if(a[j]%i==0)
					{
						col[j]=cnt;
						c++;
					}
				}
			}
			if(c)
				cnt++;
		}
		cout<<cnt-1<<endl;
		for(auto i: col)
			cout<<i<<" ";
		cout<<endl;
	}
    return 0;
}

