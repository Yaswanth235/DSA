//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
 
/* Link list node */
struct Node
{
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
};

void push(struct Node** head_ref, int new_data)
{
   
    struct Node* new_node = new Node(new_data);
    
    new_node->next = (*head_ref);
    (*head_ref)    = new_node;
} 

int countTriplets(struct Node* head, int x) ;

/* Driver program to test count function*/
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n , x ,i , num;
        struct Node *head = NULL;
        cin>>n>>x;
        for(i=0;i<n;i++)
        {
            cin>>num;
            push(&head,num);
        }
 
    /* Check the count function */
    cout <<countTriplets(head, x)<< endl;
    }
    return 0;
}
// } Driver Code Ends


//User function Template for C++

int countTriplets(struct Node* head, int x){ 
    vector<int>nums;
    Node*t=head;
    while(t!=NULL){
        nums.push_back(t->data);
        t=t->next;
    }
    sort(nums.begin(),nums.end());
    int n=nums.size();
        int c=0;
        for(int i=0;i<n;i++){
            int s=i+1;
            int e=n-1;
            while(s<n-1){
                if(s>=e){break;}
                if(nums[i]+nums[e]+nums[s]==x){
                    c++;
                    e--;
                    s++;
                }
                else if(nums[e]+nums[s]+nums[i]>x){
                    e--;
                }
                else{
                    s++;
                }
            }
        }
        return c;
} 