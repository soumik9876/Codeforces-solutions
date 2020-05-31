#include<iostream>
using namespace std;
int main()
{
    int n,m,c,mishka=0,chris=0;
    cin>>n;
    while(n--)
    {
        cin>>m>>c;
        if(m>c)
            mishka++;
        else if(m<c)
            chris++;
    }
    if(mishka<chris)
        cout<<"Chris"<<endl;
    else if(mishka>chris)
        cout<<"Mishka"<<endl;
    else
        cout<<"Friendship is magic!^^"<<endl;
    return 0;
}
