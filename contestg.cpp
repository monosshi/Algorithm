#include<bits/stdc++.h>  //header file
using namespace std;  //using declaration
int t,i,n,count;  // global variables 
void encode(string str)  //function for encode with the parameter string
{
    int count=1;  //initializing count 1 for the element we select is also counted

    for(int i=0;i<str.size();i++)   //loop for checking the string elements
    {
        
            if(str[i] == str[i+1])  //if elemnts are same 
            {
            count=count+1;  //increment count 
            }
           else
           {
           cout << count<< str[i];  
           count=1;       
           }       
           }  
            cout<<endl;        
        }
int main()   //main function
{
    
    cin>>t;  //tqaking testcase
    string str;  //intializing string str
     
    while(t--)  //while  t-- it means that much test case
    {
        
        cin>>str;  //taking string input
         encode(str); //function parametr

    } 
    return 0; //retun nothing
}

/*void encode(string str)
{
    int count=1;

    for(int i=0;i<str.size();i++)
    {
        int count = 1;
        for(int i=0;i<str.size()-1;i++)
        {

            if(str[i] == str[i+1])
            {
            count++;
             
            }
           
        }
        // Print character and its count
        cout << count<< str[i]<<endl;
    }
}
    
*/
