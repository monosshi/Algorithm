#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,p,q,count=0;
    cin>>a>>b;

   do
   {
    a=a*3;
    b=b*2;

    count++;
   } while (a<=b);
   

    cout<<count<<endl;
    return 0;
}