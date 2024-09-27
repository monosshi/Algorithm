#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int a,b,c,d;

    
    while(t--)
    {

        int arr[4];

        for(int i=0;i<4;i++)
        {
            cin>>arr[i];
        }
         int p = arr[0];
        int count=0;
        for(int i=1;i<4;i++)
        {
            if(p<arr[i])
            {
                count++;
            }
        }
        
     cout<<count<<endl;

        }
    
    return 0;
}