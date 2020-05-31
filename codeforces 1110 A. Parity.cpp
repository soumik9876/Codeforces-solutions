#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long b,temp,k,total=0;
    cin>>b>>k;
    k--;
    while(k--)
    {
        cin>>temp;
        if(temp*b%2)
            total++;
    }
    cin>>temp;
    if(temp%2)
        total++;
    if(total%2)
        cout<<"odd\n";
    else
        cout<<"even\n";
    return 0;
}
