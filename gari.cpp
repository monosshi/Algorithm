#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int four=0,three=0,two=0,one=0,count=0;
    for(int i=0;i<n;i++)
    {

        if(arr[i]=='1')
        {
            one++;
        }

        
         if(arr[i]=='2')
        {
            two++;
        }

       

         if(arr[i]=='3')
        {
            three++;
            
        }

         

         if(arr[i]=='4')
        {
            count++;
        }

         

        int p = three*3;
        int a = (three*4)-p;

        if(a==one)
        {
            count++;
        }

        int m = two*2;
        int n = two*4 -m;

        if(n==0)
        {
            count++;
        }

        
    }

    cout<<count<<endl;

    
           
 

    return 0;
}