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
#define N                     5000000
using namespace std;
bool isprime[N+10];

int factorcnt[N+10];
void factors()
{
    isprime[1]=true;
    for(int i=2;i<=N;i++)
    {
        if(factorcnt[i]==0)
        {
            for(int j=i;j<=N;j+=i)
            {
                int k=j;
                while(k%i==0)
                {
                    factorcnt[j]++;
                    k/=i;
                }
            }
        }
    }

}
int main()
{
    //KAMEHAMEHA
//    #ifdef _soumik
//        freopen("input.txt", "r", stdin);
//    #endif
    int t,a,b;
    factors();
    scanf("%d",&t);

    for(int i=2;i<=N;i++)
        factorcnt[i]+=factorcnt[i-1];
    //for(int i=1;i<=10;i++) cout<<factorcnt[i]<<endl;
    while(t--)
    {
        scanf("%d%d",&a,&b);
        printf("%d\n",factorcnt[a]-factorcnt[b]);
    }
    return 0;
}


