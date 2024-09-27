#include<bits/stdc++.h> //header file including all file
using namespace std; //using declaration
int main() //main function
{
    int n,a,m,count;  //initialing int type variables
    cin>>n;  //taking the number of students group input

    int arr[n]; //initializing array

    for(int i=0;i<n;i++)  //loop for taking array input
    {
        cin>>arr[i];  //taking array input
    }
   
   count=0; //counter
    for(int i=0;i<n;i++) //lopp for comparing array elemnts
    {
        if(arr[i]<4) //if the element is less than 4 then 
        {
             a = 4- arr[i];  /*substract the elemnt from the atmost number that a car can hold and store the ans on variable a 
                             this a means that that much seat is empty on the car*/
             m= a+arr[i+1];  // then add the empty seat with the next element of array which is group member and store it on variable m
          
        } 
          //else 
          else
          {
        
         arr[i]==4; //if the array element is equal to 4 that means no seat left and the car is filled up that means 1 car is full so we will count that car
         count++;  //incrementing the car

        }
         
         if(m<=5)  //now if m  is less than or equal to the 4 that is the atmost passanger
        {
            count++; //count
        }   
      
    }

    
      cout<<count<<endl; //print the ans the minimum car needed 

      /*i coudl not found any other logic here i tried*/


    
    return 0;  //return nothing to the amin function
}



/*#include<bits/stdc++.h>
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

         if(m<=5)
        {
            count++;
        }
   
    }

      cout<<count<<endl;

   
    return 0;
}*/

/*if(arr[n-1]<=4)
        {
            count++;
        }*/