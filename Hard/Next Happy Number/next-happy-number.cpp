//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public:
    bool isHappy(int N){
   if(N==1 or N==7)return 1;
   int sum,n=N;
   while(n>9){
       sum=0;
       while(n){
           int rem=n%10;
           sum+=rem*rem;
           n/=10;
       }
       if(sum==1 or sum==7)return 1;
       n=sum;
   }
   return 0;
}
    int nextHappy(int N){
        while(++N){
            if(isHappy(N)){
                return N;
            }
        }
        return 0;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.nextHappy(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends