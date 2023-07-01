//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
     bool isPrime(int n){
      if(n<=1){
          return 0; 
      }
      for(int i=2;i<=sqrt(n);i++){
          if(n%i==0){
              return false;
          }
      }
      return true;
  }
    vector<int> getPrimes(int N) {
        vector<int>v;
        for(int i=2;i<=N/2;i++){
            if(isPrime(i) && isPrime(N-i)){
            v.push_back(i);
            v.push_back(N-i);
            return v;
        }
        }
            v.push_back(-1);
            v.push_back(-1);
            return v;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;

        Solution ob;
        vector<int> ptr = ob.getPrimes(N);
        cout << ptr[0]<<" "<<ptr[1] << endl;
    }
    return 0;
}
// } Driver Code Ends