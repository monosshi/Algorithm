#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    int b,c,h;

    cin>>t;

    while(t--)
    {
        cin>>b>>c>>h;

        if(b==(c+h))
        {
            cout<<(b+c+h)-1<<endl;
        }

        else if(b>(c+h))
        {
            cout<<((c+h)*2)+1<<endl;
        }

        else if(b<(c+h))
        {
            cout<<b+(b-1)<<endl;
        }
    }
    return 0;
}