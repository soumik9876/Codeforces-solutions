#include<iostream>
using namespace std;
int main()
{
    int n,k,total,extra[3];
    cin>>n>>k;
    extra[0]=((n*2)%k)==0?0:1;
    extra[1]=((n*5)%k)==0?0:1;
    extra[2]=((n*8)%k)==0?0:1;
    cout<<((n*2)/k)+extra[0]+extra[1]+extra[2]+((n*5)/k)+((n*8)/k)<<endl;
    return 0;

}
