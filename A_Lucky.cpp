#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    string str;
    int c1=0,c2=0;
    while(t--)
    {
        cin>>str;

       int c1 = str[0]+str[1]+str[2];
       int c2 = str[3]+str[4]+str[5];

       if(c1==c2)
       {
        cout<<"YES"<<endl;
       }
       else
       {
        cout<<"NO"<<endl;
       }

    }
    return 0;
}