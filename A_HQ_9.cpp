#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin>>str;
    int c=0;
    for(int i=0;i<str.size();i++)
    {
        if(str[i]=='H'|| str[i]=='Q'|| str[i]=='9')
        {
            c++;
        }
    }

    if(c!=0)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}