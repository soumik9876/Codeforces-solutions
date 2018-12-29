#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    int n;
    double temp,total=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>temp;
        total+=temp;
    }
    printf("%.12lf",total/n);
    return 0;
}
