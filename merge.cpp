#include<bits/stdc++.h>  //header file
using namespace std;  //using declaration



void merge(int l ,int mid, int h)  //merge function
{
    int i=l, j=mid+1,k=l;

//cound not understand the logic here how to merge the array

}

void mergesort(int l,int h)  //merge sort function
{
    if(l<h) //when lower is less than higher
    {
        int mid =(l+h)/2;  //will will get thw mid 
        mergesort(l,mid);   //calling the recursive function merge sort from lower to mid
        mergesort(mid+1,h);  //then from the mid+1 to higher
        merge(l,mid,h);  //calling merge function
    }
}

int main()  //main function
{
    int n;  //initializing int type n 
    cin>>n;  //taking input n
    int arr[n]; //initialing int type array

    for(int i=0;i<n;i++)  //taking array input
    {
        cin>>arr[i]; //array input
    }
}