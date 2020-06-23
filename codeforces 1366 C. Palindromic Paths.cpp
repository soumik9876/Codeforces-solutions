
// Problem : C. Palindromic Paths
// Contest : Codeforces - Educational Codeforces Round 89 (Rated for Div. 2)
// URL : https://codeforces.com/contest/1366/problem/C
// Memory Limit : 256.000000 MB 
// Time Limit : 1500.000000 milisec 

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
		vector<vi> graph(n+1);
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				int temp;
				cin>>temp;
				graph[i].eb(temp);
			}
		}
		vi level[n+m+1],l[n+m+1];
		queue< pair<int,pii> > q1,q2;
		bool visited[n+1][m+1]={};
		q1.push(mp(1,mp(0,0))),q2.push(mp(1,mp(n-1,m-1)));
		int lev=0;
		while(!q1.empty())
		{
			pii u=q1.front().S;
			
			int lol=q1.front().F;
			lev=max(lev,lol);
			q1.pop();
			//cout<<u.F<<" "<<u.S<<endl;
			
			level[lol].eb(graph[u.F][u.S]);
			if(u.F<n-1 && !visited[u.F+1][u.S])
			{
				visited[u.F+1][u.S]=true;
				q1.push(mp(lol+1,mp(u.F+1,u.S)));
			}
			if(u.S<m-1 && !visited[u.F][u.S+1])
			{
				visited[u.F][u.S+1]=true;
				q1.push(mp(lol+1,mp(u.F,u.S+1)));
			}
		}
		bool v[n+1][m+1]={};
		while(!q2.empty())
		{
			pii u=q2.front().S;
			
			int lol=q2.front().F;
			q2.pop();
			//cout<<u.F<<" "<<u.S<<endl;
			
			l[lol].eb(graph[u.F][u.S]);
			if(u.F>0 && !v[u.F-1][u.S])
			{
				v[u.F-1][u.S]=true;
				q2.push(mp(lol+1,mp(u.F-1,u.S)));
			}
			if(u.S>0 && !v[u.F][u.S-1])
			{
				v[u.F][u.S-1]=true;
				q2.push(mp(lol+1,mp(u.F,u.S-1)));
			}
		}
		for(int i=1;i<=lev;i++)
		{
			//for(auto j: l[i])
				//cout<<j<<" ";
			//cout<<endl;
		}
		int total=0;
		lev=lev/2;
		for(int i=1;i<=lev;i++)
		{
			int zero1=0,one1=0,zero2=0,one2=0;
			for(int j=0;j<level[i].size();j++)
			{
				
				if(level[i][j])
					one1++;
				else
					zero1++;
				if(l[i][j])
					one2++;
				else
					zero2++;
			}
			total+=min(zero1+zero2,one1+one2);
		}
		cout<<total<<endl;
	}
    return 0;
}

