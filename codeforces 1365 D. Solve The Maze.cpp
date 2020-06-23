
// Problem : D. Solve The Maze
// Contest : Codeforces - Codeforces Round #648 (Div. 2)
// URL : https://codeforces.com/contest/1365/problem/D
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
bool visited[52][52];
int n,m;
int dfs(int row,int col,string s[])
{
	if(s[row][col]=='#' || visited[row][col])
		return 0;
	visited[row][col]=true;
	int ans=0;
	if(row>0)
		ans+=dfs(row-1,col,s);
	if(row<n-1)
		ans+=dfs(row+1,col,s);
	if(col>0)
		ans+=dfs(row,col-1,s);
	if(col<m-1)
		ans+=dfs(row,col+1,s);
	if(s[row][col]=='G')
		ans++;
	if(s[row][col]=='B')
		ans--;
	return ans;
}
int main()
{
    KAMEHAMEHA
	int t;
	cin>>t;
	while(t--)
	{
		
		cin>>n>>m;
		string s[n+1];
		memset(visited,false,sizeof(visited));
		for(int i=0;i<n;i++)
		{
			cin>>s[i];
		}
		int good=0;
		for(int i=0;i<n;i++)
		{
			
			for(int j=0;j<m;j++)
			{
				if(s[i][j]=='B')
				{
					if(i>0 && s[i-1][j]=='.')
						s[i-1][j]='#';
					if(i<n-1 && s[i+1][j]=='.')
						s[i+1][j]='#';
					if(j>0 && s[i][j-1]=='.')
						s[i][j-1]='#';
					if(j<m-1 && s[i][j+1]=='.')
						s[i][j+1]='#';
				}
				else if(s[i][j]=='G')
					good++;
			}
		}
		int total=dfs(n-1,m-1,s);
		//cout<<total<<endl;
		if(total==good)
			cout<<"Yes"<<endl;
		else
			cout<<"No"<<endl;
	}
    return 0;
}

