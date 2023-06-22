//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    bool lemonadeChange(int N, vector<int> &bills) {
         int f=0;
         int t=0;
         for(int i=0;i<N;i++){
             if(bills[i]==5){
                 f++;
             }
             else if(bills[i]==10){
                 t++;
                 f--;
             }
             else if(bills[i]==20){
                 if(t){
                     t--;
                     f--;
                 }
                 else{
                     f=f-3;
                 }
             }
             if(f<0||t<0)return false;
         }
         
         return true;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;

        vector<int> bills(N);
        for (int i = 0; i < N; i++) cin >> bills[i];

        Solution obj;
        int ans = obj.lemonadeChange(N, bills);
        if (ans)
            cout << "True" << endl;
        else
            cout << "False" << endl;
    }
    return 0;
}
// } Driver Code Ends