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
    int a[n+1][m+1],b[n+1][m+1];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
            b[i][j]=0;
        }
    }

    vector< pii > operation;
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<m-1;j++)
        {
            int cnt=0;
            for(int k=0;k<=1;k++)
            {
                for(int z=0;z<=1;z++)
                {
                    if(a[i+k][j+z]==1 )
                    {
                        cnt++;
                    }
                }
            }
            if(cnt==4)
            {
                operation.eb(i+1,j+1);
                for(int k=0;k<=1;k++)
                {
                    for(int z=0;z<=1;z++)
                    {
                        b[i+k][j+z]=1;
                    }
                }
            }
        }
    }
    bool check=true;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(a[i][j]!=b[i][j])
            {
                check=false;
                break;
            }
        }
        if(check==false) break;
    }
    if(check)
    {
        cout<<operation.size()<<endl;
        for(auto i:operation)
            cout<<i.F<< " "<<i.S<<endl;
    }
    else
        cout<<-1<<endl;
    return 0;
}


