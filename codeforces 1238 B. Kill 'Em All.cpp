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
        int n,r;
        set <int,greater<int> > x;
        cin>>n>>r;

        for(int i=0,temp;i<n;i++)
        {
            cin>>temp;
            x.insert(temp);
        }

        int hits=0,total=0;
        for(auto i:x)
        {
            if(i-hits<=0)
                break;
            hits+=r,total++;
        }
        cout<<total<<endl;
    }
    return 0;
}


