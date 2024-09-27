#include<bits/stdc++.h>
using namespace std;
int main()
{
    string num;
    cin>>num;
   int count=0;
       
    
  int f=0,s=0;
    for(int i=0;i<=num.length();i++)

   
    {
        if(num[i]== '4') 
        {
            f++;

        }

        if(num[i]== '7')
        {
            s++;
        }


    

        

    }
    count = f+s;



     if(count== 4 || count== 7)
        {
            cout<<"YES"<<endl;
        }

   

        else{
            cout<<"NO"<<endl;
        }
return 0;
}

    