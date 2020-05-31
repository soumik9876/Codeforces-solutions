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
    int q;
    cin>>q;
    while(q--)
    {
        ll n,h;
        cin>>h>>n;
        vll p;
        for(int i=0,temp;i<n;i++)
        {
            cin>>temp;
            p.eb(temp);
        }
        p.eb(0);
        int crystals=0;
        for(int i=0;i<n-1;i++)
        {
            if(p[i+1]==p[i]-1)
            {
                if(p[i+2]<p[i]-2)
                {
                    //cout<<p[i]<< " "<<p[i+1]<< " "<<p[i+2]<<endl;
                    crystals++;
                    p[i+1]=p[i+2]+1;
                }
                else
                    i++;
            }
            else
            {
                p[i]=p[i+1]+1;
                i--;
            }
        }
        cout<<crystals<<endl;
    }
    return 0;
}


