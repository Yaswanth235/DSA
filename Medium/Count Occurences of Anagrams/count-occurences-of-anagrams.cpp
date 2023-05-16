//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
	int search(string pat, string txt) {
	    int ans = 0;
	     int n = txt.length();
	     int k = pat.length();
	     vector<int> mp(26,0);
	     vector<int> mp2(26,0);
	     for(int i=0;i<k;i++){
	         mp[pat[i]-'a']++;
	         mp2[txt[i]-'a']++;
	     }
	     if(mp==mp2)
	        ans++;
        for(int i=k;i<n;i++){
            mp2[txt[i]-'a']++;
            mp2[txt[i-k]-'a']--;
            if(mp ==mp2)
                ans++;
        }
        return ans;
	}

};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string pat, txt;
        cin >> txt >> pat;
        Solution ob;
        auto ans = ob.search(pat, txt);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends