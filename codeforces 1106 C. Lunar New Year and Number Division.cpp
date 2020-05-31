#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int n,temp;
    vector<int> a;
    cin>>n;
    for(int k=0;k<n;k++)
    {
        cin>>temp;
        a.push_back(temp);
    }
    sort(a.begin(),a.end());
    long long total=0,i=0,j=n-1;
    while(j>i)
    {
        total+=(a[i]+a[j])*(a[i]+a[j]);
        i++;
        j--;
    }
    cout<<total<<endl;
    return 0;
}
