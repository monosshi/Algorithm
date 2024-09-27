#include<bits/stdc++.h> //header file
using namespace std; //using declaration
int main()         //main function

{
    int t;  //initializing t as testcase
    cin>>t;   //taking input of testcase t

    while(t--)   //it will run until the testcase limit exit
    {
    string A,B;   //intializing string A and B , string A is a string which we will convert and  string B is a string in which we will convert to.

    cin>>A>>B;   //taking both string input

    int m = A.size();  //intializing integer tupe m variable where i am storing the size of string A
    int n = B.size();  //intializing integer tupe n variable where i am storing the size of string B

    A = ' '+A;  //as we add a empty string to string A
    B = ' '+B;  //as we add a empty string to string B
    
    int ed [n+1][m+1];  //intializing ed variable for doing edit distance as we do the tabulation method with size n+1 && m+1

    for(int i=0;i<n+1;i++)  //loop for row
    {
        for(int j=0;j<m+1;j++)  //loop for coloum
        {
            if(j==0)  //when j==0
            {
                ed[i][j]=i; //just print the i values
            }
            else if(i==0) //when i==0
            {
                ed[i][j]=j; //just print the j values
            }

            else if(A[i]==B[j])  //when string A ansd B are equal
            {
                ed[i][j]=ed[i-1][j-1];  //we will just take the value direct from the diagonal
            }

            else  //else
            {
                int mini= min(ed[i-1][j],ed[i][j-1]);   //initialize a variable mini and find the minimum of the upper and left value of that value
                ed[i][j] = 1+min(mini,ed[i-1][j-1]);  //again with mini will will find the minimum of diagonal and add 1 to it
                                 
            }
        }
    }

    cout<<ed[n][m]<<endl; //printing the minimun edit distance to convert strng A to string B
    }
    return 0;  //returng nothing to the main function
}