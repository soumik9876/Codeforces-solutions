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
    cin>>n;
    vi friends,nogift;
    bool check[n+1]={};
    friends.eb(0);
    for(int i=0,temp;i<n;i++)
    {
        cin>>temp;
        friends.eb(temp);
        check[temp]=true;
    }
    for(int i=1;i<=n;i++)
    {
        if(check[i]==false)
            nogift.eb(i);
    }
    //sort(all(nogift),greater<int> ());
    int sz=nogift.size();
    for(int i=0;i<nogift.size();i++)
    {
        if(friends[nogift[i]]==0)
        {
           // cout<<nogift[i]<< " "<<i<<" "<<nogift.size()<<endl;
            int temp=i+1;
            if(i==nogift.size()-1)
                temp=i-1;
            //cout<<temp<<endl;
            friends[nogift[i]]=nogift[temp];
            nogift.erase(nogift.begin()+temp);
            if(temp==i-1) i--;
        }
    }
    for(int i=1;i<=n;i++)
    {
        if(friends[i]==0)
        {
            //cout<<i<< " "<<nogift[0]<<endl;
            int temp=0;
            if(nogift[0]==i)
                temp=1;
            friends[i]=nogift[temp];
            nogift.erase(nogift.begin()+temp);
        }
    }
    //cout<<3<<endl;
    for(int i=1;i<=n;i++)
        cout<<friends[i]<< " ";
    cout<<endl;
    return 0;
}

