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
        bool a[27]={};
        string selora;
        cin>>selora;
        int sz=selora.size(),cnt=1;
        int hudai=100;
        while(hudai--)
        {

        }
        for(int i=1;i<sz;i++)
        {

            if(selora[i]!=selora[i-1])
            {
                if(cnt%2)
                {
                    a[selora[i-1]-96]=true;

                }
                cnt=1;
            }
            else
                cnt++;
            //cout<<s[i]<< " "<<cnt<<endl;
        }
        if(cnt%2)
            a[selora[sz-1]-96]=true;
        for(int i=1;i<=26;i++)
        {
            if(a[i])
                cout<<char(96+i);
        }
        cout<<endl;
    }
    return 0;
}

