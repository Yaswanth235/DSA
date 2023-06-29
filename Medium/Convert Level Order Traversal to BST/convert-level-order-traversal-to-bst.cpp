//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* right;
    Node* left;
    
    Node(int x){
        data = x;
        right = NULL;
        left = NULL;
    }
};

void preorderTraversal(Node* root)
{
	if (!root)return;
	cout << root->data << " ";
	preorderTraversal(root->left);
	preorderTraversal(root->right); 
}

Node* constructBst(int arr[], int n);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)cin>>arr[i];
        Node *root = constructBst(arr, n);
        preorderTraversal(root);
        cout<<endl;
    }
	return 0; 
}
// } Driver Code Ends


//User function Template for C++


//Function to construct the BST from its given level order traversal.
Node * solve(vector<int> &v){
    if(v.size()==0) return NULL;
    Node *root = new Node(v[0]);
    vector<int > r,l;
    for(int i=1; i< v.size(); i++){
        if(v[i]< v[0]) l.push_back(v[i]);
        else r.push_back(v[i]);
    }
    root->left= solve(l);
    root->right= solve(r);
    return root;
}
Node* constructBst(int arr[], int n){
       vector <int> v;
    for(int i=0; i<n;i++){
        v.push_back(arr[i]);
    }
    return solve(v);
}
