#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    long long n,m,k,l,minn;
    cin>>n>>m>>k>>l;
    minn=(l+k)/m;
    if((l+k)%m!=0)
        minn++;
//    for(int i=1;;i++)
//    {
//        if((m*i)>n)
//            break;
//        if((m*i)-k>=l)
//        {
//            minn=i;
//            break;
//        }
//    }
    long long temp=floor(double(n/m));
    //cout<<temp<<endl;
    if(n<m)
        cout<<-1<<endl;
    else if(temp<minn)
        cout<<-1<<endl;
    else
        cout<<minn<<endl;
    return 0;
}
