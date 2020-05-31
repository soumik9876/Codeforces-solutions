#include<iostream>
using namespace std;
int main()
{
    long long n,k,x;
    cin>>n;
    while(n--)
    {
        cin>>k>>x;
        cout<<((k-1)*9)+x<<endl;
    }
    return 0;
}
