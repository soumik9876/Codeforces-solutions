#include<iostream>
using namespace std;
int main()
{
    long long n,k,total;
    cin>>n>>k;
    total=k/2;
    if(k%2==0)
        total--;

    if(k>(n+1))
        total-=(k-n-1);
    if(total<=0)
        cout<<0<<endl;
    else
        cout<<total<<endl;
    return 0;
}

