#include<bits/stdc++.h>
using namespace std;
void bsort(int ara[]);
int main()
{
    int length[10],i,j,k,checktriangle=0;
    for(i=0;i<4;i++)
        cin>>length[i];
    bsort(length);
    for(i=0;i<2;i++)
    {
        for(j=i+1;j<3;j++)
        {
            for(k=j+1;k<4;k++)
            {
                if(length[i]==(length[j]+length[k]))
                    checktriangle=1;
                else if(length[i]<(length[j]+length[k]))
                {
                    checktriangle=2;
                    break;
                }
            }
            if(checktriangle==2)
                break;
        }
        if(checktriangle==2)
                break;
    }
    if(checktriangle==0)
        cout<<"IMPOSSIBLE\n";
    else if(checktriangle==1)
        cout<<"SEGMENT\n";
    else if(checktriangle==2)
        cout<<"TRIANGLE\n";
    return 0;
}
void bsort(int ara[])
{
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(ara[j]<ara[j+1])
                swap(ara[j],ara[j+1]);
        }
    }
}
