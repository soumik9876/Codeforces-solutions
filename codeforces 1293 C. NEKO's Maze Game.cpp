
// Problem : C. NEKO's Maze Game
// Contest : Codeforces Round #614 (Div. 2)
// URL : http://codeforces.com/contest/1293/problem/C
// Memory Limit : 256.000000 MB 
// Time Limit : 1500.000000 milisec 
// Powered by CP Editor (https://github.com/coder3101/cp-editor)

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
    int n,q,block=0;
    cin>>n>>q;
    vector<vi> state(3,vi (n+1));
    while(q--)
    {
        int r,c;
        cin>>r>>c;
        if(state[r][c]==0)
        {
            state[r][c]=1;
            if(c>1)
            {
                if(state[3-r][c-1]==1)
                    block++;
            }
            if(c<n)
            {
                if(state[3-r][c+1]==1)
                    block++;
            }
            if(state[3-r][c]==1)
                block++;
        }
        else
        {
            state[r][c]=0;
            if(c>1)
            {
                if(state[3-r][c-1]==1)
                    block--;
            }
            if(c<n)
            {
                if(state[3-r][c+1]==1)
                    block--;
            }
            if(state[3-r][c]==1)
                block--;
        }
        if(!block)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
    return 0;
}

