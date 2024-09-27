#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    int s,u,m;
    cin>>t;
    int a[3];
    while(t--)
    {
    for(int i=0;i<3;i++)
    {
        cin>>a[i];
    }

     s= a[0]+a[1];
     u= a[0]+a[2];
     m= a[1]+a[2];


     if(s>=10 || u>=10 ||m>=10)
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