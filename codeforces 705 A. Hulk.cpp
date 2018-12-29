#include<iostream>
using namespace std;
int  main()
{
    int i,n;
    cin>>n;
    for(i=1;i<n;i++)
    {
        if(i%2)
            cout<<"I hate that ";
        else
            cout<<"I love that ";
    }
    if(i%2)
        cout<<"I hate it"<<endl;


        else
            cout<<"I love it"<<endl;
            return 0;
}
