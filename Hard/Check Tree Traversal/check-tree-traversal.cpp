//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h> 
using namespace std; 


// } Driver Code Ends
//Back-end complete function Template for C++
class Node{
  public:
    int data;
    Node* left;
    Node* right;
    
    Node(int x){
        data = x;
        left=NULL;
        right=NULL;
    }
};
class Solution{
    public:
    bool isTrue = true;
    int find(int inorder[],int low,int high,int x){
        for(int i=low;i<=high;++i){
            if(inorder[i]==x) return i;
        }
        isTrue=false;
        return -1;
    }
    Node* civil(int preorder[], int inorder[], int low, int high, int& idx){
        if(low>high) return NULL;
        int x = preorder[idx];
        idx++;
        Node* root = new Node(x);
        int i = find(inorder, low, high, x);
        if(i==-1) return root;
        if(low==high) return root;
        root->left = civil(preorder, inorder, low, i-1, idx);
        root->right = civil(preorder, inorder, i+1, high, idx);
        return root;
    }
    void ppp(Node* root, vector<int>& v){
        if(!root) return;
        ppp(root->left, v);
        ppp(root->right, v);
        v.push_back(root->data);
    }
    bool checktree(int preorder[], int inorder[], int postorder[], int n){
    	int i = 0;
    	Node* root = civil(preorder, inorder, 0, n-1, i);
    	vector<int> v;
    	ppp(root, v);
        if(v.size()!=n) return false;
    	for(int i = 0; i < v.size(); ++i){
    	    if(postorder[i]!=v[i]){
    	        return false;
    	    }
    	}
    	return isTrue;
    }
};


//{ Driver Code Starts.

int main() 
{ 
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int preorder[n];
		int inorder[n];
		int postorder[n];

		for (int i = 0; i < n; ++i)
			cin>>preorder[i];

		for (int i = 0; i < n; ++i)
			cin>>inorder[i];

		for (int i = 0; i < n; ++i)
			cin>>postorder[i];
        
        Solution obj;
		if(obj.checktree(preorder, inorder, postorder, n))
			cout << "Yes\n";
		else
			cout<<"No\n";
	} 
	return 0; 
} 


// } Driver Code Ends