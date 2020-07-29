//Author - Soumik Roy
//Date & Time - July 28, 2020 8:33 PM
//Problem name - B. GameGame
//Problem url - https://codeforces.com/problemset/problem/1383/B
//Time limit - 1000 ms
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
	int n;
	cin>>n;
	vi cells(33);
	for (int i = 0,temp; i < n; i++)
	{
		cin>>temp;
		int cnt=0;
		while(temp)
		{
			if(temp%2)
				cells[cnt]++;
			temp/=2;
			cnt++;
		}
	}
	for(int i=32;i>=0;i--)
	{
		//cout<<cells[i]<<" ";
		if(cells[i]%2==0)
			continue;
		if(cells[i]%4==3 && n%2)
		{
			cout<<"LOSE"<<endl;
			return;
		}
		cout<<"WIN"<<endl;
		return;
	}
	cout<<"DRAW"<<endl;
	return;
}
int main()
{
    KAMEHAMEHA
	int t=1;
	cin>>t;
	for(int cn=1;cn<=t;cn++)
	{
		solve();
	}
    return 0;
}

