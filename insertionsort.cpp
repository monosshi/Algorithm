#include<bits/stdc++.h>  //header file to include all stardary library
using namespace std;  //using declaration
int main()  //main function
{
    int n;  //initializing int type variable n
    cin>>n;  //taking input n which will be the array size
    int arr[n];  //initializing int type array with size n

    //loop for taking the array input
    for(int i=0;i<n;i++)  //loop will continue until array is less than the n i will increment i++
    {
        cin>>arr[i];  //taking array elements input
    }
    int x=0;  //initializing int type variable x =0
    int j=0;  //initializing int type variable y=0

    for(int i=0; i<n; i++)  //loop for pick the value for intersion sort
    {
        x=arr[i];  //keeping the picked value saved at variable x
        j=i-1;  //now j is indicating the predessor of i and comparing it
        while(j>=0 && arr[j]>x)  //while j is greater and equal to zero and arr[j] value is  greater than x then it will go through the loop
        {
            
            arr[j+1]=arr[j];  // kepping the arr[j] means the greater value at the place of arr[j+1] 
            j--;  //decrementing j
    
        arr[j+1]=x;  //kepping the value at fixed position
    }

    cout<<arr[0];   //printing first element
     for(int i=1;i<n;i++)  //printing the sorted array using the loop
   {
       cout<<" "<<arr[i];  //printing the arary elements
   }
    cout<<endl;  //linebraek
  
    }

    return 0;  //return nothing to the main function
}