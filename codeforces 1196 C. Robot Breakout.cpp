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
#define tcase()               ll t,n; cin>>t;n=t; while(t--)
#define iscn(num)             scanf("%d",&num);
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
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int mxright=100000,mxleft=-100000,mxtop=100000,mxdown=-100000;
        bool check=true;
        while(n--)
        {
            int x,y;
            bool f1,f2,f3,f4;
            cin>>x>>y>>f1>>f2>>f3>>f4;
            if(!f1)
            {
                if(x>mxright)
                {
                    check=false;
                }
                mxleft=max(x,mxleft);
            }
            if(!f2)
            {
                if(y<mxdown)
                {
                    check=false;
                }
                mxtop=min(mxtop,y);
            }
            if(!f3)
            {
                if(x<mxleft)
                    check=false;
                mxright=min(mxright,x);
            }
            if(!f4)
            {
                if(y>mxtop)
                    check=false;
                mxdown=max(mxdown,y);
            }
        }
        if(check==false || mxdown>mxtop || mxleft>mxright)
            cout<<0<<endl;
        else
            cout<<1<< " "<<mxright<< " "<<mxtop<<endl;
    }
    return 0;
}

