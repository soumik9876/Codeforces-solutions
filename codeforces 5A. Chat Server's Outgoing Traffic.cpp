#include<bits/stdc++.h>
using namespace std;
int main()
{
    int people=0,len,traffic=0;
    char command[150];
    while(gets(command))
    {
        if(command[0]=='+')
        {
            people++;
            continue;
        }
        if(command[0]=='-')
        {
            people--;
            continue;
        }
        for(int i=0;i<strlen(command);i++)
        {
            if(command[i]==':')
            {
                traffic+=(people*(strlen(command)-i-1));
                break;
            }
        }
    }
    cout<<traffic<<endl;
    return 0;
}
