//{ Driver Code Starts
#include <iostream>

using namespace std;

struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};



Node *swapkthnode(Node* head, int num, int K);

void addressstore(Node **arr, Node* head)
{
    Node* temp = head;
    int i = 0;
    while(temp){
        arr[i] = temp;
        i++;
        temp = temp->next;
    }
}

bool check(Node ** before, Node **after, int num, int K)
{
    if(K > num)
        return 1;
        
    bool f=true;
    
    for(int i=0; i<num; i++){
        if((i==K-1) || (i==num - K)){
            if(!((before[K-1] == after[num - K]) && (before[num-K] == after[K-1]))) f=0;
        }
        else{
            if(before[i] != after[i]) f=0;
        }
    }
    
    return f;
}

int main()
{
    int T;
    cin>>T;
    while(T--){
        int num, K , firstdata;
        cin>>num>>K;
        int temp;
        cin>>firstdata;
        Node* head = new Node(firstdata);
        Node* tail = head;
        for(int i = 0; i<num - 1; i++){
            cin>>temp;
            tail->next = new Node(temp);
            tail = tail->next;
        }
        
        Node *before[num];
        addressstore(before, head);
        
        head = swapkthnode(head, num, K);
        
        Node *after[num];
        addressstore(after, head);
        
        if(check(before, after, num, K))
            cout<<1<<endl;
        else
            cout<<0<<endl;
    }
}

// } Driver Code Ends


#include<bits/stdc++.h>
Node *swapkthnode(Node* head, int num, int K){
      unordered_map<int,Node*>m;
    Node* curr=head;
    int i=1;
    while(curr!=NULL){
        m[i]=curr;
        curr=curr->next;
        i++;
    }
    Node *x=new Node(-1);
    Node* p=x;
    for(int i=1;i<=num;i++){
        if(i==K){
            p->next=m[num+1-K];
        }
        else if(i==num-K+1){
            p->next=m[K];
        }
        else{
            p->next=m[i];
        }
        p=p->next;
    }
    p->next=NULL;
    return x->next;  
}
