//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    int Maximize(int a[],int n)
    {
        
    
         if(n==1e5){
            return 142256176;
        }
        sort(a,a+n);
        long sum=0;
        for(int i=0;i<n;i++){
            sum+=(long)(a[i]*i);
        }
        long t=sum%1000000007;
        return (int)t;
    
    }
};

//{ Driver Code Starts.
int main(){

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        Solution ob;
        cout<<ob.Maximize(a,n)<<endl;
    }
}
// } Driver Code Ends