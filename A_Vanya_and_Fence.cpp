#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,h;
    cin>>n>>h;

    int x[n];

    for(int i=0;i<n;i++)
    {
        cin>>x[i];
    }
    int count =0;int c=0;
    for(int i=0;i<n;i++)
    {
        if(x[i]<=h)
        {
            count++;
        }

        else
        {
            c++;
        }
    }

    cout<<(count+(c*2))<<endl;
    return 0;
}
