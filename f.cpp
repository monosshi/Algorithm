#include<bits/stdc++.h> //header file
using namespace std; //using declaration
int main()  //main function
{

    int n,c; // initializing int type variable
    cin>>n>>c; //taking input of days and how much to return
    int arr[n];  //initializing array
    for(int i=0;i<n;i++) //taking array input
    {
        cin>>arr[i]; //array input
    }

    int track=0; //initializing sum to 0 where we will store the value

    for(int i=0;i<n-1;i++)   //loop for comparing
    {
        if(arr[i]>arr[i+1]) /*checking the elements of array between two elemnts we will compare  if one 
        the number of my sell is greater than the number of i will spend to buy the product*/
        {
            if(track< arr[i]-arr[i+1])  //now comparing the track is less then the current track
            {
                track = (arr[i]-arr[i+1]) ; //then updating the track to get maximum number of rasberry he can earn
                

            }   

        }
        
    }
    if(track-c<=0) //if ans neg
    {
        cout<<'0'<<endl; //print ans 0
    }
    else
    {
    cout<<track-c<<endl;  //now subtracting c the number i have to give to friend  from my maximum number 

    }

    return 0;  //return nothing
}

/*  if (track>sum)
        {
            sum=track;
        }*/


      /*  #include<bits/stdc++.h> //header file
using namespace std; //using declaration
int main()  //main function
{

    int n,c; // 
    cin>>n>>c;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int sum=0;

    for(int i=0;i<n-1;i++)
    {
        if(arr[i]>arr[i+1])
        {
            if(sum< arr[i]-arr[i+1])
            {
                sum = arr[i]-arr[i+1];
                

            }
             
            

        }

    }

    cout<<sum-c<<endl;
    return 0;
}*/