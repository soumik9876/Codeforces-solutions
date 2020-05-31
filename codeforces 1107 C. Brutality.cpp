#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n,k,i,j,minn=0,total=0,temp;
    vector<int> a;
    string s;
    cin>>n>>k;
    for(i=0;i<n;i++)
    {
        cin>>temp;
        a.push_back(temp);
        total+=temp;
    }
    cin>>s;
    int consistency=1;
    minn=a[0];
    for(i=1;i<n;i++)
    {

        if(s[i]==s[i-1])
        {
            consistency++;
            if(a[i]<minn)
                minn=a[i];
        }
        else
        {
            consistency=1;
            minn=a[i];
        }
        if(consistency>k)
        {
            total-=minn;
            consistency=1;
        }
        //cout<<minn<<endl;
    }
    cout<<total<<endl;
}
