#include<iostream>
using namespace std;
int main()
{
    long long x,n,i=1;
    cin>>x;
    n=1;
    while(n!=x)
    {
        if(n*2>x)
        {
            x-=n;
            n=1;
            i++;
            continue;
        }
        n*=2;
    }
    cout<<i<<endl;
    return 0;
}
