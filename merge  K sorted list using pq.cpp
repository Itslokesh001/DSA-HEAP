#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node*next;
     
    Node(int val){
        data= val;
        next=NULL;
    }
};
 Node*mergeKLists(vector<Node*>&lists){
    priority_queue<pair<int,Node*>,vector<pair<int,Node*>>,greater<pair<int,Node*>>>pq;
    for(int i=0;i<lists.size();i++){
        pq.push({lists[i]->data,lists[i]});
    }

    Node * dummyNode= new Node(-1);
    Node* temp = dummyNode;
    while(!pq.empty()){
        auto it = pq.top();
        pq.pop();
        if(it.second->next){
            pq.push({it.second->next->data,it.second->next});

        }
        temp->next=it.second;
        temp=temp->next;

    }
    return dummyNode->next;
 }
 void print(Node* head){
    Node * temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
 }
 int main(){
    Node *a = new Node(1);
    a->next=new Node(4);
    a->next->next=new Node(5);

    Node*b = new Node(1);
    b->next= new Node(3);
    b->next->next= new Node(4);

    Node * c = new Node(2);
    c->next=new Node(6);

    vector<Node*>lists={a,b,c};
    Node * ans = mergeKLists(lists);
    print(ans);

 }