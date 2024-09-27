#include<bits/stdc++.h> 
using namespace std;
int main() 
{
    int n,k; 
    cin>>n>>k;  
    int arr[n]; 
    int count=0; 

    for(int i=0;i<n;i++)  
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++) 
    {
        if(arr[i]<=5) 
        {
            arr[i]=arr[i]+k; 
        }

        if(arr[i]<=5) 
        {
            count++; 
        }        
    }
    if(count<3) 
     {
        cout<<'0';  
     }
     else  //else
     {
         cout<<count/3;  

     }
    return 0;  
}