#include<bits/stdc++.h> //header file including all file
using namespace std; //using declaration
int main() //main function
{
    int n,ans;  //initialing int type variables
    cin>>n;  //taking the number of students group input

    int arr[n]; //initializing array
  

    for(int i=0;i<n;i++)  //loop for taking array input
    {
        cin>>arr[i];  //taking array input

       
    }
   
   
  int sum=0; //kepping the sum 0 to calucate the total sum of array
    for(int i=0;i<n;i++) //lopp for comparing array elemnts
    {
      sum = sum+arr[i];  //updating the sum
    }

    if(sum>=4) //if sum is greater than and equal 4
    {

    if(sum%2==0)  //if sum is even then
    {
      ans = sum/4;  //dvide the sum by 4 because a car can hold 4 person at most
      cout<<ans<<endl;  //print the ans
    }

    else
    {
      float a =floor((sum/4)); //if the sum is odd that means it will come fractional value so will take the floor value of sum/4
      

      cout<<a+1<<endl;  //and print the ans

    }

    }

    else if(sum<4 && sum!=0)  //if sum is less than 4 and not equal 0
    {
      cout<<"1"<<endl;  //cout 1 that means 1 car or taxi needed
    }
 
    
    return 0;  //return nothing to the main function
}
