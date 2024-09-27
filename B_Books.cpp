
    #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
        int n,t,i;
        cin>>n>>t;
        int a[n];
     
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
     
        sort(a,a+n);
        
        
        if(a[0]>t)
        {
            cout<<"0"<<endl;
        }
        else
        {
        int p = t-a[0];
     
        int q;
        int ans =0;
        for(int i=1;i<n;i++)
        {
           
                 p = p-a[i];
                 ans++;
            
           
        }
        
        //cout<<q<<endl;
     
        if(ans>0)
        {
            
            cout<<ans<<endl;
        }
        
        else
        {
            cout<<"1"<<endl;
        }
        } 
        return 0;
    }