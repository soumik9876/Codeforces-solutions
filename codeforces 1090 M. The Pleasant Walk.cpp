#include<iostream>
using namespace std;
int main()
{
    int n,k,temp,temp1,cnt=0,maxx=0;
    cin>>n>>k;
    cin>>temp;
    n--;
    cnt++;
    temp1=temp;
    while(n--)
    {
        cin>>temp;
        if(cnt>maxx)
            maxx=cnt;
        if(temp==temp1)
        {
            cnt=0;
        }
        cnt++;
        temp1=temp;
    }
    if(cnt>maxx)
        maxx=cnt;
    cout<<maxx<<endl;
    return 0;
}
