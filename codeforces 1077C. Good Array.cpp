#include<iostream>
#include<vector>
using namespace std;
int main()
{
    long long unsigned n,i,j,maxx=0,maxx2=0,total=0,checknice=0;
    vector<long long unsigned> a;
    vector<long long unsigned> mem;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>j;
        a.push_back(j);
        total+=j;
        if(j>maxx)
        {
            maxx2=maxx;
            maxx=j;
            continue;
        }
        if(j>maxx2 && j<=maxx)
            maxx2=j;
    }
    //cout<<maxx<<" "<<maxx2<<endl;
    for(i=0;i<n;i++)
    {
        if(a[i]!=maxx)
        {
            //cout<<maxx<<" "<<total<<endl;
            if(maxx==(total-a[i]-maxx))
            {
                mem.push_back(i+1);
                checknice++;
            }
        }
        else
        {
            if(maxx2==(total-a[i]-maxx2))
            {
                mem.push_back(i+1);
                checknice++;
            }
        }
    }
    cout<<checknice<<endl;
    for(i=0;i<mem.size();i++)
        cout<<mem[i]<<" ";
    cout<<endl;
    return 0;
}
