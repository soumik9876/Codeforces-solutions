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
    int n,k;
    string s1;
    cin>>n>>k;
    cin>>s1;
//    string s2=s1.substr(0,k),s3=s1.substr(k,n-k);
//    int s3size=s3.size(),s2size=s2.size(),check=0;
    //cout<<s2<< " "<<s3<<endl;
    for(int i=0;i<n-k;i++)
    {
        if(s1[i]<s1[k+i])
        {
            for(int j=k-1;j>=0;j--)
            {
                if(s1[j]!='9')
                {
                    s1[j]++;
                    break;
                }
                else
                    s1[j]='0';
            }
            for(int j=0;j<n-k;j++)
            {
                s1[j+k]=s1[j];
            }
            break;
        }
        if(s1[i]>s1[i+k])
        {
            for(int j=0;j<n-k;j++)
            {
                s1[j+k]=s1[j];
            }
            break;
        }
    }
    cout<<s1.size()<<endl;
    cout<<s1<<endl;

    return 0;
}


