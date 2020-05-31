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
#define KAMEHAMEHA            ios_base::sync_with_stdio(0);
#define RASENGAN              ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    KAMEHAMEHA
//    #ifdef _soumik
//        freopen("input.txt", "r", stdin);
//    #endif
    int n,m;
    cin>>n>>m;
    int grid[n+1][m+1];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>grid[i][j];
        }
    }
    for(int i=n-1;i>=0;i--)
    {
        for(int j=m-2;j>=0;j--)
        {
            if(grid[i][j]==0)
                grid[i][j]=min(grid[i][j+1]-1,grid[i+1][j]-1);
        }
    }
    int total=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            //cout<<grid[i][j]<< " ";
            if(i<n-1)
            {
                if(grid[i+1][j]<=grid[i][j])
                {
                    cout<<-1<<endl;
                    return 0;
                }
            }
            if(j<m-1)
            {
                if(grid[i][j+1]<=grid[i][j])
                {
                    cout<<-1<<endl;
                    return 0;
                }
            }
            total+=grid[i][j];
        }
    }
    cout<<total<<endl;
    return 0;
}


