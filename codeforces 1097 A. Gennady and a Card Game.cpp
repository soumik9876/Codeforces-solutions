#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int i,check=0;
    char c1,c2,c3,c4;
    scanf("%c%c ",&c1,&c2);
    for(i=0;i<4;i++)
    {
        scanf("%c%c ",&c3,&c4);
        if(c1==c3 || c2==c4)
            check=1;
    }
    scanf("%c%c",&c3,&c4);
        if(c1==c3 || c2==c4)
            check=1;
    if(check)
    cout<<"YES\n";
    else
    cout<<"NO\n";
    return 0;
}
