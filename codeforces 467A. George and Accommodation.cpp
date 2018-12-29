#include<iostream>
using namespace std;
int main()
{
    int n,p,q,cnt=0;
    cin>>n;
    while(n--)
    {
        cin>>p>>q;
        if((q-p)>=2)
            cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}
