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
    vi a;
    string s;
    cin>>n>>s;
    bool check=true;
    for(int i=0;i<n-1;i++)
    {
        //cout<<s[i] << " " << s[i+1] <<endl;
        if(s[i]=='B')
        {
            s[i]='W';
            s[i+1]=(s[i+1]=='B')?'W':'B';
            a.eb(i+1);
        }

    }
    //cout<<s<<endl;
    if(s[n-1]=='B')
    {
        for(int i=n-1;i>0;i--)
        {
            if(s[i]=='W')
            {
                s[i]='B';
                s[i-1]=(s[i-1]=='W')?'B':'W';
                a.eb(i);
            }
        }
        if(s[0]=='W')
            check=false;
    }
    if(check)
    {
        cout<<a.size()<<endl;
        for(auto i:a)
            cout<<i<< " ";
        cout<<endl;
    }
    else
        cout<<-1<<endl;
    return 0;
}


