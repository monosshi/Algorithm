#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int a[n];

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int c=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]>=k && a[i]!=0)
        {
            c++;
        }
    }
    cout<<c<<endl;
    return 0;
}