#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
   int s1=0,s2=0,s3=0;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;

        s1=s1+a;
        s2=s2+b;
        s3=s3+c;

    }

    if(s1==0 && s2==0 && s3==0)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}