#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin>>str;

    str[0]=toupper(str[0]);

    for(int i=1;i<str.size();i++)
    {
        str[i]=tolower(str[i]);
    }
    
    cout<<str;
    return 0;
}