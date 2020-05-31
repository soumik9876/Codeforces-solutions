#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int n,minn,temp;
    vector<int> a;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>temp;
        a.push_back(temp);
    }
    sort(a.begin(),a.end());
    minn=a[n-2]-a[0];
    if((a[n-1]-a[1])<minn)
        minn=a[n-1]-a[1];
    cout<<minn<<endl;
    return 0;
}
