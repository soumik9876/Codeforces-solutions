//Author - Soumik Roy
//Date & Time - June 24, 2020 12:24 PM
//Problem name - C. RationalLee
//Problem url - https://codeforces.com/contest/1369/problem/C
//Time limit - 2000 sec
//Memory Limit - 256 MB    

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
void solve()
{
	int n,k;
	cin>>n>>k;
	vll a,w;
	for (int i = 0,temp; i < n; i++)
	{
		cin>>temp;
		a.eb(temp);
	}
	for (int i = 0,temp; i < k; i++)
	{
		cin>>temp;
		w.eb(temp);
	}
	sort(all(a),greater<int> ());
	sort(all(w));
	ll total=0;
	for(int i=0;i<k;i++)
	{
		total+=a[i];
		if(w[i]==1)
			total+=a[i];
	}
	int ind=k-1,i=0;
	while (ind<n && i<k)
	{
		if(w[i]==1)
		{
			i++;
			continue;
		}
		else
		{
			ind+=(w[i++]-1);
		}
		if(ind>=n) break;
		total+=a[ind];
	}
	cout<<total<<endl;
}
int main()
{
    KAMEHAMEHA
	int t=1;
	cin>>t;
	while(t--)
	{
		solve();
	}
    return 0;
}

