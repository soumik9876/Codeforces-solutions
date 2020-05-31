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
    int n,sx,sy,x,y,a[4]={0};
    int cox[]={-1,0,0,1},coy[]={0,-1,1,0};
    cin>>n>>sx>>sy;
    while(n--)
    {
        cin>>x>>y;
        if((sx-1>=x) ||(sx-1==x && sy==y))
            a[0]++;
        if((sy-1)>=y ||(sx==x && sy-1==y))
            a[1]++;
        if((sy+1)<=y ||(sx==x && sy+1==y))
            a[2]++;
        if((sx+1)<=x ||(sx+1==x && sy==y))
            a[3]++;
    }
    int mx=0;
    for(int i=0;i<4;i++) mx=max(mx,a[i]);
    for(int i=0;i<4;i++)
    {
        if(mx==a[i])
        {
            cout<<a[i]<<endl<<sx+cox[i]<< " "<<sy+coy[i]<<endl;
            break;
        }
    }
    return 0;
}


