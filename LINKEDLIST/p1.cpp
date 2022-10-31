#include<bits/stdc++.h>
using namespace std;

class node{
    public:
        int data;
        node* next;

        node(int val){
            data = val;
            next = NULL;
        }
};

void insert_at_head(node*& head,int val){
    node* n = new node(val);
    n -> next = head;
    head = n;
}

void insert_after(node* head,int pos,int val){
    node* n = new node(val);
    node* temp = head;
    for(int i = 1;i < pos-1;i++){
        if(temp -> next != NULL)
            temp = temp -> next;
    }

    n -> next = temp -> next;
    temp -> next = n;
}

void insert_at_tail(node*& head,int val){
    node* n = new node(val);

    if(head == NULL){
        head = n;
        return;
    }

    node* temp = head;

    while(temp -> next != NULL)
        temp = temp -> next;

    temp -> next = n;
}

void delete_at_beggin(node*& head){

    node* n = head;
    head = n -> next;
    delete n;
}

void delete_at_end(node*& head){
    node* temp = head;

    while(temp -> next -> next != NULL)
        temp = temp -> next;

    temp -> next = NULL;
}

void delete_at_middle(node*& head,int pos){

    node* temp = head;
    for(int i = 1;i < pos-1;i++)
            temp = temp -> next;

    temp -> next = temp -> next -> next;    
}

void print(node*& head){
    node* temp = head;
    cout<<"\n";
    while(temp != NULL){
        cout<<" "<<temp -> data;
        temp = temp -> next;
    }
    delete temp;
    
}
int main() {
    node* head = NULL;

    insert_at_tail(head,1);
    insert_at_tail(head,2);
    insert_at_tail(head,3);
    insert_at_tail(head,4);
    insert_at_tail(head,5);
    print(head);

    insert_after(head,2,10);
    print(head);

    insert_at_head(head,0);
    print(head);

    delete_at_beggin(head);
    print(head);

    delete_at_end(head);
    print(head);

    delete_at_middle(head,4);
    print(head);

}
