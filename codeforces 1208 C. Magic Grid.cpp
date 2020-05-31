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
    int n;
    cin>>n;
    int grid[n+1][n+1];
    ll cnt=0;
    for(int i=0;i<n/4;i++)
    {
        for(int j=0;j<n/4;j++)
        {
            for(int row=0;row<4;row++)
            {
                for(int col=0;col<4;col++)
                {
                    grid[(i*4)+row][(j*4)+col]=cnt++;
                }
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<grid[i][j]<< " ";
        }
        cout<<endl;
    }
    cout<<endl;
    return 0;
}


