#include<iostream> //header file
#include<string.h> //header file
using namespace std;  //using declaration 

int main()  //main function
{
    string X,Y; //initializing string X and Y in which we will find the longest common subsequence
    while(cin>>X>>Y)  //taking string input X and Y
    {
    int m = X.size();  //intializing integer tupe m variable where I am storing the size of string X
    int n = Y.size();  //intializing integer tupe n variable where I am storing the size of string Y

    int lcs[m+1][n+1];  //intializing lcs of size m+1 && n+1

    for(int i=0;i<m+1;i++)  //row loop
    {
        for(int j=0;j<n+1;j++)  //col loop
        {

            if(i==0 || j==0)  /*when row i will be 0 and when j will be 0 that means there is no string so we cant found the subsequence */
    
            {
                lcs[i][j]=0; /*in this case we will initialize the lcs[i][j] =0 both that row and coloum of table 0*/
            }

            else if(X[i-1]==Y[j-1])  //if the string character match then , (here i have given i-1 and j-1 because string index starts from 0)
            { 
                lcs[i][j]=1+lcs[i-1][j-1]; /*we will go one step back in col and one step back in row that means
                we will go to the diagonal value and add 1 to the diagonal value*/
            }

            else  //if string char doesnot match then
            {
                lcs[i][j]=max(lcs[i-1][j],lcs[i][j-1]);    //we will find the max between the one step left row and one step upper col
            }
        }
    }
   
    cout<<lcs[m][n]<<endl;   //printing the longest common subseuence length which is now in the bottom of the table

    }
    return 0;   //return o value to tge main function

}

