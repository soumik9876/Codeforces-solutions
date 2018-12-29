#include<bits/stdc++.h>
using namespace std;
int main()
{
    int y,w,maxx;
    cin>>y>>w;
    maxx=y>w?y:w;
    if(maxx==1)
        printf("1/1\n");
    else if(maxx==2)
        printf("5/6\n");
    else if(maxx==3)
        printf("2/3\n");
    else if(maxx==4)
        printf("1/2\n");
    else if(maxx==5)
        printf("1/3\n");
    else if(maxx==6)
        printf("1/6\n");
    return 0;
}
