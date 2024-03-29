//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
#include <string>

using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    //Function to find list of all words possible by pressing given numbers.
    vector<string> letterCombinationsUtil(const int a[],int N,const string table[]){
    vector<string>list;
    queue<string>q;
    q.push("");
    while (!q.empty()) {
        string s=q.front();
        q.pop();
        if (s.length()==N)
            list.push_back(s);
        else
            for(auto letter:table[a[s.length()]])
                q.push(s+letter);
    }
    return list;
}
//  
    vector<string> possibleWords(int a[], int N){
        string table[10]= {"0","1","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        vector<string>list = letterCombinationsUtil(a, N, table);
        return list;
    }
};


//{ Driver Code Starts.

int main() {
  
	int T;
	
	cin >> T; //testcases
	
	while(T--){ //while testcases exist
	   int N;
	    
	   cin >> N; //input size of array
	   
	   int a[N]; //declare the array
	   
	   for(int i =0;i<N;i++){
	       cin >> a[i]; //input the elements of array that are keys to be pressed
	   }
	   
	   Solution obj;
	   
	  vector <string> res = obj.possibleWords(a,N);
	  for (string i : res) cout << i << " ";
	   cout << endl;
	}
	
	return 0;
}
// } Driver Code Ends