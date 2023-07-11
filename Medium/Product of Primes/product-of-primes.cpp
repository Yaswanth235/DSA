//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    bool isPrime(int n){
        for(int i=2;i*i<=n;i++){ 
            if(n%i==0){
                return false;
            }
        }
        return true;
    }
    long long primeProduct(long long l, long long r){
        long long ans=1;
        int m=1e9+7;
        for(int i=l;i<=r;i++){
           if(isPrime(i)){
              ans=(ans*i)%m;
           }
        }
        return ans ;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        long long L, R;
        cin>>L>>R;
        
        Solution ob;
        cout<<ob.primeProduct(L, R)<<"\n";
    }
    return 0;
}
// } Driver Code Ends