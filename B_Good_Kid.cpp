#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    int t;
    
    cin>>t;

    while(t--)
    {
        int n;
        
        cin>>n;

        int arr[n];

        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }

       
        sort(arr,arr+n);

        long long mul=arr[0]+1;
           
        

         
          for(int i=1;i<n;i++)
        {
            
           mul *= arr[i];

        }

        
        cout<<mul<<endl;
       

    }
   
    return 0;
}

/*
#include<bits/stdc++.h>
using namespace std;
int arr[100];
int main()
{
    int trace;
    int t,i,n,m,p,q,k;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;

        int arr[n];

        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }

       
       for(int i=1;i<n;i++) 
    {
        for(int j=0;j<n-i;j++) 
        {
            if(arr[j]>arr[j+1]){                    
            swap(arr[j],arr[j+1]);        
                                
        }
        } 
        }

         int mul =1;

          for(int i=1;i<n;i++)
        {
            
          k=  mul *= arr[i];

        }

        m = arr[0];
        p = m+1;
        q = k*p;
        cout<<q<<endl;
        
       

    }
   
    return 0;
}*/

/*   for(int i=1;i<n;i++)
        {
            mul *= arr[i];

           

        }

         int m = arr[0];
         p = m+1;
        int q = mul*p;

       // cout<<q<<endl;
 
       
    }*/