#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int i=1;
    while(a<=b)
    {
        a*=3;
        b*=2;
        i++;
    }
    cout<<i-1<<endl;
    return 0;
}
