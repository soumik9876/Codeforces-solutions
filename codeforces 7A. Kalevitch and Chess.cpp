#include<bits/stdc++.h>
using namespace std;
int main()
{
    int row,column,checkpaint,total=0;
    char board[10][10];
    for(int i=0;i<8;i++)
        gets(board[i]);
    for(row=0;row<8;row++)
    {
        checkpaint=1;
        for(column=0;column<8;column++)
        {
            if(board[row][column]=='W')
                checkpaint=0;
        }
        if(checkpaint==1)
            total++;
    }
    for(column=0;column<8;column++)
    {
        checkpaint=1;
        for(row=0;row<8;row++)
        {
            if(board[row][column]=='W')
                checkpaint=0;
        }
        if(checkpaint==1)
            total++;
    }
    if(total==16)
        total-=8;
    cout<<total<<endl;
    return 0;
}
