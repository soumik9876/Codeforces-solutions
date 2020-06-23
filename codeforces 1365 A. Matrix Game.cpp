
// Problem : A. Matrix Game
// Contest : Codeforces - Codeforces Round #648 (Div. 2)
// URL : https://codeforces.com/contest/1365/problem/0
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
	int t;
	cin>>t;
	while(t--)
	{
		int n,m;
		cin>>n>>m;
		vi a(n+1),b(m+1);
		int cnt=0,row=0,col=0;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				int temp;
				cin>>temp;
				a[i]=max(a[i],temp);
				b[j]=max(b[j],temp);
			}
		}
		for(int i=0;i<n;i++)
		{
			if(!a[i])
				row++;
		}
		for(int i=0;i<m;i++)
		{
			if(!b[i])
				col++;
		}
		//cout<<row<<" "<<col<<endl;
		row=min(row,col);
		if(row%2)
			cout<<"Ashish"<<endl;
		else
			cout<<"Vivek"<<endl;
	}
    return 0;
}

