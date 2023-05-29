//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    bool matchPattern(string& word,string& pattern) {
        string patternInWord="";
        for(char c:word){
            if(isupper(c))patternInWord+=c;
            if(patternInWord==pattern)return true;
        } 
        return patternInWord==pattern;
    }
    vector<string>CamelCase(int N, vector<string> Dictionary, string Pattern){
        vector<string>ans;
        for(string word:Dictionary){
            if(matchPattern(word,Pattern)){
                ans.push_back(word);
            }
        }
        sort(ans.begin(),ans.end());
        if(ans.empty())ans.push_back("-1");
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<string> Dictionary(N);
        for (int i = 0; i < N; i++) cin >> Dictionary[i];
        string Pattern;
        cin >> Pattern;
        Solution ob;
        vector<string> ans = ob.CamelCase(N, Dictionary, Pattern);
        sort(ans.begin(), ans.end());
        for (auto u : ans) cout << u << " ";
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends