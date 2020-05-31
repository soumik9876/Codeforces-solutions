#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,maxx=0;
    int temp;
    int cnt=0,maxcnt=0;
    cin>>n;
    while(n--)
    {
        cin>>temp;
        if(temp>maxx)
        {
            maxx=temp;
            cnt=1;
            maxcnt=1;
        }
        else if(temp==maxx)
        {
            cnt++;
        }
        else if(temp<maxx)
        {
            if(cnt>maxcnt)
                maxcnt=cnt;
            cnt=0;
        }
    }
    if(cnt>maxcnt)
        maxcnt=cnt;
    cout<<maxcnt<<endl;
    return 0;
}
