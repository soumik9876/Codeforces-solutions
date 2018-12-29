#include<iostream>
using namespace std;
int main()
{
    int a,b,maxx,minn;
    cin>>a>>b;
    maxx=a;
    minn=b;
    if(b>a)
    {
        maxx=b;
        minn=a;
    }
    cout<<minn<<" "<<(maxx-minn)/2<<endl;
    return 0;
}
