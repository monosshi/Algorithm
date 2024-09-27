#include<bits/stdc++.h>
using namespace std;
int main()
{
    int row,col;
    cin>>row>>col;

    char a[row][col];

    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cin>>a[i][j];
        }
    }
    int count=0;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(a[i][j]!='B'&& a[i][j]!='W'&& a[i][j]!='G')
            {
                count++;
            }
        }
    }

    if(count==0)
    {
        cout<<"#Black&White"<<endl;
    }
    else
    {
        cout<<"#Color"<<endl;
    }
    return 0;
}