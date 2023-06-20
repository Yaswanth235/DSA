//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string S) 
    { 
        reverse(S.begin(),S.end());
        int i=0,j=0;
        while(i<S.length()){
            while(S[j]!='.'&&j<S.length()){
                j++;
            }
            reverse(S.begin()+i,S.begin()+j);
            i=j+1;
            j=i;
        }
        return S;
    } 
};

//{ Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}
// } Driver Code Ends