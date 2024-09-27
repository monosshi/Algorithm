#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main()
{
    int n,t,ans;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        cin>>t;
    }
    
    if(t%2!=0)
    {
        int ans = floor((t/2));
        cout<<ans;
    }

    else
    {
        int ans = (t/2)-1;
         cout<<ans;
     
    }


    return 0;


}