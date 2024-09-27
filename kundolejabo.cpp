#include<bits/stdc++.h>   //header file 
using namespace std;
int main()  //main function
{
    int n,k; 
    cin>>n>>k;  
    int arr[n]; 
    int count=0; //counter 

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
     else  
     {
         cout<<count/3; 

     }
 return 0;  
}