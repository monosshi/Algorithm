



#include<bits/stdc++.h> //header file to include all standard library 
using namespace std; //using declaration
int main()  //main function
{
    int n; //initializing int type variable n
    cin>>n; //taking input n
    int array[n]; //initializing int type array which size is n
    int countswp=0; //intitializing countswp varuable and keeping 0

    for(int i=0;i<n;i++)  //loop for taking array input will continue until i is less than size n
    {
        cin>>array[i];  //taking array  elemnts input
    }

    

    for(int i=0;i<n;i++)  //loop for pick the value
    {
        int mini =i;    //keeping the smallest value in int type variable mini

       
        for(int j =i+1;j<n;j++) //after picking the value will check for the next value till end either the value is greater thean any value
        {
            

            if(array[j]<array[mini]) //if j smaller then mini
            {
                mini=j;             //then updating j into mini variable 
            }

             
           
        }

               swap(array[i],array[mini]); //swap between arr i and mini that means swap the greater value with smaller value

                 if(i!=mini) //if i not equal to j then only we will count the swap operatins
                {
                   
                 countswp++; //count increment of swaps
                }

    }

    //printing the array

        cout<<array[0];  //printing first element
         for(int i=1;i<n;i++)  //loop for printing
            {
                cout<<" "<<array[i]; //printing the sorted array
            }
            cout<<endl; //linebreak

            cout<<countswp<<endl; //printing count
 
    return 0; //return nothing
}
