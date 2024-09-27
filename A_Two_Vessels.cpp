#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;

        if(a==b)
        {
            cout<<'0'<<endl;
        }

        else
        {
            int sum = (a+b)/2;

            if(a>sum)
            {
                int m = a-sum;

                if(c>a+b)
            {
                if(m%2==0)
                {
                    int mo=m/c;
                    cout<<mo+1<<endl;
                }
            }
            
            
            
              else  if(m%2==0)
                {               
                int mo = m/c;

                cout<<mo<<endl;
                }
            
                else
                {
                     int mo = m/c;

                    cout<<mo+1<<endl;

                }
            
        }
            else
            {
                int m = b-sum;

                if(c>a+b)
            {
                if(m%2==0)
                {
                    int mo=m/c;
                    cout<<mo+1<<endl;
                }
            }
            
            
            
              else  if(m%2==0)
                {               
                int mo = m/c;

                cout<<mo<<endl;
                }
            
                else
                {
                     int mo = m/c;

                    cout<<mo+1<<endl;

                }
               
            }
            
        }


    }
    return 0;
   
}

