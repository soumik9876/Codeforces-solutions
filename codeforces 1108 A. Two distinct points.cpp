#include<iostream>
using namespace std;
int main()
{
    int l1,r1,l2,r2,q;
    cin>>q;
    while(q--)
    {
        int a,b;
        cin>>l1>>r1>>l2>>r2;
        a=l1;
        b=l2;
        if(l1==l2)
            b=r2;
        cout<<a<<" "<<b<<endl;
    }
    return 0;
}
