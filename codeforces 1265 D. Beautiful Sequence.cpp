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
    int a,b,c,d,one=0,two=0,zero=0,three=0;
    vi num;
    cin>>a>>b>>c>>d;
    //bool check=true;
//    if(a>b)
//        check=false;
    if(b>a)
        num.eb(1),one++;
    int temp=b-one;
    for(int i=1;i<=min(a,temp);i++)
    {
        num.eb(0),num.eb(1);
        zero++,one++;
    }
//    if(b-a>c)
//        check=false;
    temp=b-one;
    for(int i=1;i<=min(temp,c);i++)
    {
        num.eb(2),num.eb(1);
        two++,one++;
    }
    if(d-three>c)
    {
        num.eb(3),three++;
    }
    temp=c-two;
    int temp1=d-three;
    for(int i=1;i<=min(temp,temp1);i++)
    {
        num.eb(2),num.eb(3);
        two++,three++;
    }
    if(c-two)
        num.eb(2),two++;
    if(a==zero && b==one && c==two && d==three)
    {
        cout<<"YES"<<endl;
    }
    else
        cout<<"NO"<<endl;
    for(auto i:num)
            cout<<i<< " ";
        cout<<endl;
    return 0;
}


