//Author - Soumik Roy
//Date & Time - August 25, 2020 8:46 PM
//Problem name - B. RPG Protagonist
//Problem url - https://codeforces.com/contest/1400/problem/B
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
	int p,f,cnts,cntw,s,w,total=0;
	cin>>p>>f>>cnts>>cntw>>s>>w;
	int fi=0,second=0,mx=0;
	while(fi<=cnts)
	{
		total=0;
		int first=fi;
		int weight=first*s;
		if(weight>p)
			break;
		int temp=(p-weight)/w;
		temp=min(temp,cntw);
		total=first+temp;
		int remfirst=cnts-first,rems=cntw-temp;
		
		first=min(remfirst,f/s);
		temp=min(rems,f/w);
		if(s<w)
		{
			total+=first;
			temp=(f-first*s)/w;
			temp=min(temp,rems);
			total+=temp;
		}
		else
		{
			total+=temp;
			temp=(f-temp*w)/s;
			temp=min(temp,remfirst);
			total+=temp;
		}
		mx=max(mx,total);
		fi++;
	}
	cout<<mx<<endl;
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

