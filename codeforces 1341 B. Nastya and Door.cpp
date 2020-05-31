
// Problem : B. Nastya and Door
// Contest : Codeforces - Codeforces Round #637 (Div. 2) - Thanks, Ivan Belonogov!
// URL : https://codeforces.com/contest/1341/problem/B
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
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		vi a;
		a.eb(0);
		bool peak[n+1]={};
		for(int i=0,temp;i<n;i++)
		{
			cin>>temp;
			a.eb(temp);
		}
		for(int i=2;i<n;i++)
		{
			if(a[i]>a[i-1] && a[i]>a[i+1])
				peak[i]=true;
		}
		int peaks=0,mx=0,l=1;
		for(int i=1;i<=k-2;i++)
		{
			//cout<<i<<" "<<peak[i]<<endl;
			if(peak[i+1])
				peaks++,mx++;
		}
		//cout<<peaks<<endl;
		for(int i=2;i<=n-k+1;i++)
		{
			//cout<<peaks<<" "<<i<<" "<<peak[i]<<" "<<peak[i+k-3]<<endl;
			if(peak[i]==true)
				peaks--;
			if(peak[i+k-2]==true)
				peaks++;
			if(peaks>mx)
			{
				mx=peaks;
				l=i;
			}
		}
		cout<<mx+1<<" "<<l<<endl;
	}
    return 0;
}

