#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n,i,j,maxx=0,total,checknice=0;
    vector<int> a;
    vector<int> mem;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>j;
        a.push_back(j);
    }
    for(i=0;i<n;i++)
    {
        maxx=0;
        total=0;
        for(j=0;j<n;j++)
        {
            if(j==i)
                continue;
            if(a[j]>maxx)
            {
                total+=maxx;
                maxx=a[j];
            }
            else
            {
                total+=a[j];
            }
        }
        if(maxx==total)
        {
            mem.push_back(i+1);
            checknice++;
        }
    }
    cout<<checknice<<endl;
    for(i=0;i<mem.size();i++)
        cout<<mem[i]<<" ";
    cout<<endl;
    return 0;
}
