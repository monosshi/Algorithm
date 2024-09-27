#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int x,y;
	    cin>>x>>y;
	    
	    if(x==y)
	    {
	        cout<<y<<endl;
	    }
	    
	    else if(x>y)
	    {
	        cout<<y<<endl;
	    }
	    
	    else
	    {
	        int p = y-x;
            int ans = x+(p*2);

            cout<<ans<<endl;
	    }
	}
	return 0;
}
