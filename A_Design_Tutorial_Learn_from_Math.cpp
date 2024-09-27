#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    cin>>num;

    if(num%2==0)
    {
        int p = num/2;
        cout<<p<<" "<<p<<endl;
    }
    else
    {
        int q = num-1;
        

        cout<<1<<" "<<q<<endl;
    }
    return 0;
}