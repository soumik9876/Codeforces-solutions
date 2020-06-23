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
		int n,mx=0;
		set<int> a;
		cin>>n;
		//bool num[1025]={};
		for(int i=0,temp;i<n;i++)
		{
			cin>>temp;
			a.insert(temp);
			mx=max(mx,temp);
		}
		int div=1;
		bool check=false;
		while(div<=1024)
		{
			set<int> s;
			for(auto i: a)
			{
				s.insert(i^div);
				
			}
			if(a==s)
			{
				check=true;
				break;
			}
			div++;
		}
		if(!check)
			cout<<-1<<endl;
		else
			cout<<div<<endl;
	}
    return 0;
}