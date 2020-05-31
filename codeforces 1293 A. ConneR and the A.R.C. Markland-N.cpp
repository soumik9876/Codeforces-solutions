
// Problem : A. ConneR and the A.R.C. Markland-N
// Contest : Codeforces Round #614 (Div. 2)
// URL : http://codeforces.com/contest/1293/problem/A
// Memory Limit : 256.000000 MB 
// Time Limit : 1000.000000 milisec 
// Powered by CP Editor (https://github.com/coder3101/cp-editor)

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
        int n,s,k;
        cin>>n>>s>>k;
        vi a;
        for(int i=0,temp;i<k;i++)
        {
            cin>>temp;
            a.eb(temp);            
        }
        sort(all(a));
        int i=0,j=0;
        while(true)
        {
            if(s+i<=n)
            if(!binary_search(all(a),s+i))
            {
                cout<<i<<endl;
                break;
            }
            if(s+j>0)
            if(!binary_search(all(a),s+j))
            {
                cout<<-j<<endl;
                break;
            }
            i++,j--;
        }
    }    
    return 0;
}

