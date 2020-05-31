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
        string s;
        bool check=true;
        cin>>s;

//            if(s[i]==s[i+1])
//                check=false;
            string l = "abc" ;
            for(int i = 0 , sz = s.size() ; i < sz ; i++ )
            {
                if(s[i] != '?') continue ;
                bool ok = false ;

                for(auto c : l) {
                    bool thik = true ;
                    if( i && s[i-1] == c ) thik = false ;
                    if(i < sz -1 && s[i+1] == c) thik = false;

                    if(thik){
                        ok = true ;
                        s[i] = c;
                        break ;
                    }
                }

            }
            int sz=s.size();
            for(int i=0;i<sz-1;i++)
            {
                if(s[i]==s[i+1])
                {
                    check=false;
                    break;
                }
            }
            if(!check)
                cout<<-1<<endl;
            else
                cout<<s<<endl;
        }
    return 0;
}

