#include<iostream>
using namespace std;
int main()
{
    long long l,r,i,j,n;
    cin>>l>>r;
    cout<<"YES\n";
    for(i=l;i<=r;i+=2)
        cout<<i<<" "<<i+1<<endl;
    return 0;
}
