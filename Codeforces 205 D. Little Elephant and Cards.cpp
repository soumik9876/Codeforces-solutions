//Author - Soumik Roy
//Date & Time - August 31, 2020 1:34 PM
//Problem name - D. Little Elephant and Cards
//Problem url - https://codeforces.com/problemset/problem/205/D
//Time limit - 2000 ms
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
int dir[]={0,1,0,-1,1,0,-1,0};
void solve()
{
	int n;
	cin>>n;
	unordered_map<int,int> cnt1,cnt2;
	for(int i=0;i<n;i++)
	{
		int num1,num2;
		cin>>num1>>num2;
		cnt1[num1]++;
		cnt2[num1]++;
		if(num1!=num2)
			cnt2[num2]++;
	}
	int mn=-1;
	for(auto x: cnt2)
	{
		int need=max(0,(n/2)+(n%2)-cnt1[x.F]);
		if(cnt2[x.F]>=need+cnt1[x.F])
		{
			if(mn==-1) mn=need;
			mn=min(mn,need);
		}
	}
	cout<<mn<<endl;
}
int main()
{
    KAMEHAMEHA
	int t=1;
	for(int cn=1;cn<=t;cn++)
	{
		solve();
	}
    return 0;
}

