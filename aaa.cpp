#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,m,count;
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++)
    {
        cin>>arr[n];
    }
  count =0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<4)
        {
             a = 4- arr[i];
             m= a+arr[i+1];
          
        } 
        else
        {
         arr[i]==4;
         count++;

        }

         if(m<=4)
        {
            count++;
        }
   
    }

      cout<<count<<endl;

   
    return 0;
}