#include<iostream>
using namespace std;
int main()
{
    int n,marks[1005][5],row,col,total=0,thomas=0,position=1;
    cin>>n;
    for(col=0;col<4;col++)
    {
        cin>>marks[0][col];
        thomas+=marks[0][col];
    }
    for(row=1;row<n;row++)
    {
        total=0;
        for(col=0;col<4;col++)
        {
            cin>>marks[row][col];
            total+=marks[row][col];
        }
        if(total>thomas)
            position++;
    }
    cout<<position<<endl;
    return 0;
}
