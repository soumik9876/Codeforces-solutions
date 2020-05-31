#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,m,k,temp;
    long long maxx1=0,maxx2=0;
    cin>>n>>m>>k;
    cin>>temp;
    if(temp>maxx1)
        maxx1=temp;
    n--;
    while(n--)
    {
        cin>>temp;
        if(temp>maxx2 && temp<=maxx1)
            maxx2=temp;
        if(temp>maxx1)
        {
            maxx2=maxx1;
            maxx1=temp;
        }

    }
    long long  total=0;
    total=(maxx2*(m/(k+1)))+(maxx1*(m-(m/(k+1))));
    cout<<total<<endl;
    return 0;
}
