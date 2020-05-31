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
    int t;
    cin>>t;
    while(t--)
    {
        int n,a,b,c,win=0,rock=0,paper=0,scissor=0;
        cin>>n>>a>>b>>c;
        string s,s1;
        cin>>s;
        for(auto i:s)
        {
            if(i=='R')
                rock++;
            else if(i=='P')
                paper++;
            else
                scissor++;
        }

        for(auto i:s)
        {
            if(i=='S')
            {
                if(a)
                {
                    win++;
                    a--;
                    s1+='R';
                }
                else
                {
                    if(b-rock>c-paper)
                    {
                        b--;
                        s1+='P';
                    }
                    else
                        c--,s1+='S';
                }
                scissor--;
            }

            else if(i=='R' )
            {
                if( b )
                {
                    win++;
                    b--;
                    s1+='P';
                }
                else
                {
                    if(a-scissor>c-paper)
                        a--,s1+='R';
                    else
                        c--,s1+='S';
                }
                rock--;
            }

            else if(i=='P' )
            {
                if( c )
                {
                    win++;
                    c--;
                    s1+='S';
                }
                else
                {
                    if(a-scissor>b-rock)
                        a--,s1+='R';
                    else
                        b--,s1+='P';
                }
                paper--;
            }

        }

        if(win>=(n/2)+(n%2))
        {
            cout<<"YES"<<endl;
            cout<<s1<<endl;
        }
        else
            cout<<"NO"<<endl;
    }
    return 0;
}


