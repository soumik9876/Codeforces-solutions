#include<iostream>
using namespace std;
int main()
{
    int magnet,temp,n,groups=1;
    cin>>n;
    cin>>magnet;
    temp=magnet;
    n--;
    while(n--)
    {
        cin>>magnet;
        if(temp!=magnet)
            groups++;
        temp=magnet;
    }
    cout<<groups<<endl;
    return 0;
}
