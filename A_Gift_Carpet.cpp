#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m,n;
        cin>>m>>n;
        char a[m][n];

        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>a[i][j];
            }
        }
        
        char arr[4] ={'v','i','k','a'};
        int c=0;
        int k=0;
         for(int i=0;j++)
        {
            for(int i=0;i<m;i++)
            {
                if(a[j][i]==arr[k])
                {
                    c++;
                    k++;
                }
            }
        }

        if(c==4)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }

    }
    return 0;
}