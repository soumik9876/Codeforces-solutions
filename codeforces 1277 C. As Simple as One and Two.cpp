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
        vi a;
        cin>>s;
        int sz=s.size();
        for(int i=0;i<sz;i++)
        {
            int w=-1,cnt=0;
            if(s[i]=='t' && s[i+1]=='w')
            {
                w=i+1;
                i++;
            }
            if(s[i]=='o')
                cnt++;
            while(s[i+1]=='o')
                cnt++,i++;
            //cout<<i<< " "<<s[i]<< " "<<cnt<<endl;
            if(w!=-1)
            {
                if(cnt>1)
                    a.eb(w+1);
                else if(cnt==1)
                    a.eb(w+2);
            }
            //i=w=cnt+i;
            if(cnt && s[i+1]=='n' && s[i+2]=='e')
            {
                if(cnt>1)
                    a.eb(i+2);
                else if (cnt==1 && w==-1)
                    a.eb(i+1);
                i+=2;
            }
        }
        cout<<a.size()<<endl;
        for(auto i: a)
            cout<<i<<  " ";
        cout<<endl;
    }
    return 0;
}


