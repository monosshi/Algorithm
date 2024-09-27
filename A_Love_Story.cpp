#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a = "codeforces";
        int c=0;
         string b;
         cin>>b;
        for(int i=0;i<a.size();i++)
        {
            if(b[i]!=a[i])
            {
                c++;
            }
        }

        cout<<c<<endl;
    }
}