#include<bits/stdc++.h>
using namespace std;

class listnode{
public:
    int data;
    listnode* next;

    listnode(){
        data = 0;
        next = NULL;
    }

    listnode(int val){
        data = val;
        next = NULL;
    }
    listnode(int val,listnode* srf){
        data = val;
        next = srf;
    }
};

void insertnode(listnode* &l,int val){
    if(!l){
        l = new listnode(val);
        return;
    }
    listnode* temp = l;
    while(temp -> next)
        temp = temp -> next;

    temp -> next = new listnode(val);
    return;
}

int find_length(listnode* &l){
    listnode * temp = l;
    int count = 0;

    while(temp){
        temp = temp -> next;
        ++count;
    }
    return count;

}

void display(listnode* &l){

    if(!l) return;

    listnode *temp = l;
    cout<<endl;
    while(temp){
        cout<<temp -> data<<" -> ";
        temp = temp -> next;
    } 
    //cout<<"4"<<endl;
    cout << " NULL";
    return;
}

void display_cyclic_list(listnode* &l,int len){
    listnode *temp = l;
    int i = 0;
    cout<<endl;
    while(i < 2*len){
        cout<<temp -> data<<" -> ";
        temp = temp -> next;
        ++i;
    }
    return;
}

listnode* reverse(listnode* l){
    if(!l || !l->next) return l;
    listnode *pre = NULL;
    listnode *cur = l;
    listnode *nex;

    while(cur){
                nex = cur -> next;
        cur -> next = pre;
                pre = cur;
                cur = nex;
            
    }
    return pre;
}

listnode* reverse_in_group(listnode* l,int k){
    if(!l || !l->next || k <= 1) return l;

    listnode *dummy = new listnode();
      dummy -> next = l;
    listnode *pre   = dummy;
    listnode *cur;
    listnode *nex; 
    listnode *temp  = l;
    int count = 0;
    while(temp){
        temp = temp -> next;
        ++count;
    }
    cout<<"\n"<< count;

    while(count >= k){
        cur = pre -> next;
        nex = cur -> next;
        for(int i = 1;i < k;i++){
            cur -> next = nex -> next;
            nex -> next = pre -> next;
            pre -> next = nex;
                    nex = cur -> next;
        }
        pre = cur;
        count -= k;
    }
    return dummy -> next;

}

bool make_cycle(listnode* &l,int pos){

    if(pos > find_length(l)){
        cout << "\n\ncycle cant made";
        return 0;
    }
    listnode *temp = l;
    listnode *ptr;
    listnode *pre;
    int count = 1;

    while(temp){
        if(count == pos){
            ptr = temp;
        }
        count++;
        pre = temp;
        temp = temp -> next;
    }
    pre -> next = ptr;
    return 1;
}

bool detectcycle(listnode* &l){
    if(!l || !l->next) return 0;
    listnode *slow = l;
    listnode *fast = l;

    while(fast -> next && fast->next->next){
        slow = slow -> next;
        fast = fast -> next -> next;

        if(slow == fast)
            return 1;
    }
    return 0;

}

listnode* start_of_loop(listnode* &l){

    if(!l || !l -> next) return l;

    listnode *slow = l;
    listnode *fast = l;
    listnode *entry = l;

    while(fast -> next && fast -> next ->next){
        slow = slow -> next;
        fast = fast -> next -> next;

        if(slow == fast){
            while(slow != entry){
                slow = slow -> next;
                entry = entry -> next;
            }
            return slow;
        }
    }
    return l;
}

listnode* find_mid_node(listnode* &l){
    if(!l || !l->next) return l;

    listnode *slow = l;
    listnode *fast = l;

    while(fast -> next && fast -> next -> next){
        slow = slow -> next;
        fast = fast -> next -> next;
    }
    return slow ;
}

bool check_palindrome(listnode* &l){
    if(!l || !l->next) return 1;

    listnode *mid = find_mid_node(l);
    mid -> next = reverse(mid -> next);

    listnode *temp = l;
    mid = mid -> next;
    while(mid){
        if(temp -> data != mid -> data)
            return 0;
            
        temp = temp -> next;
        mid = mid -> next;
    }
    return 1;
}

void delete_without_head(listnode* l){
    l -> data = l -> next -> data;
    l -> next = l -> next -> next;
    return;
}


//rotate - brute force
/*listnode* rotate(listnode* &l,int k){
    if(!l || !l->next || k <= 0) return l;
    listnode *temp = l;
    listnode *curhead = l;

    k = k % find_length(l);

    for(int i = 0;i < k;i++){
        temp = curhead;
        while(temp -> next -> next)
            temp = temp -> next;

        temp -> next -> next = curhead;
                     curhead = temp -> next;
                temp -> next = NULL;
    }
    return curhead;
}*/


listnode* rotate(listnode* &l,int k){
    if(!l || !l->next || k <= 0) return l;

    listnode *temp = l;
    listnode *pre;
    int count = 1;
    listnode *curhead;

    int len = find_length(l); 
    k = k % len;
    k = len - k;

    while(temp -> next){
        if(count == k)
            pre = temp;

        temp = temp -> next;
        count++;
    }

    curhead = pre -> next;
    temp -> next = l;
    pre -> next = NULL;
    return curhead;
}

listnode* clone(listnode* &l){
    if(!l || !l->next) return l;

    listnode *l2 = NULL;
    listnode *temp = l;


    while(temp){
        insertnode(l2,temp -> data);
        temp = temp -> next;
    }

    return l2;

}

int main(){

    listnode* l = NULL;
    insertnode(l,1);
    insertnode(l,2);
    insertnode(l,3);
    insertnode(l,4);
    insertnode(l,5);
    insertnode(l,6);
    insertnode(l,7);
    insertnode(l,8);
    cout<<"\noriginal list:";
    display(l);

    listnode* li = NULL;
    insertnode(li,1);
    insertnode(li,2);
    insertnode(li,3);
    insertnode(li,3);
    insertnode(li,2);
    insertnode(li,1);
    //insertnode(li,7);
    //insertnode(li,8);
    //insertnode(li,9);
    //insertnode(li,10);
    //insertnode(li,11);
    //display(li);
    


    
    /*
    //reverse the entire list
    l = reverse(l);
    cout<<"\nreversed  list:";
    display(l);

    //reverse the entire list
    l = reverse(l);
    cout<<"\ntwice reversing gives again original  list:";
    display(l);

    //reverse in group
    int k = 2;
    listnode *ll = reverse_in_group(l,k);
    cout<<"\nreversed in group list:";
    display(ll);


    //creating cycle in list
    int pos = 6;
    int length = find_length(l);
    bool iscycle = make_cycle(l,pos);
    cout<<"\n\ncycled list: ";
    display_cyclic_list(l,length);


    //checking that list has loop or not
    if(detectcycle(l))
        cout<<"\nloop found";
    else
        cout<<"\nloop not found";


    //dipalying the starting point of the list(if it has loop)
    listnode* start = start_of_loop(l);
    cout<<"\n\nloop start at "<<start -> data;


    //print the middle node of list
    listnode *middle = find_mid_node(li);
    cout<<"\nmiddle node of list is : "<<middle -> data;


    //check palindorme
    bool ispalindrome = check_palindrome(li);
    if(ispalindrome)
        cout<<"\n\ngiven list is palindrome";
    else
        cout<<"\n\ngiven list is not palindrome";


    //delete a node but head node of the list is not available
    delete_without_head(l -> next);
    cout <<"\n\nlist after deletion: ";
    display(l);


    //rotate a list by k times
    listnode *newhead = rotate(l,8001);
    cout <<"\n\nlist after rotation: ";
    display(newhead);*/


    //clone of normal singly  list 
    listnode *newhead = clone(l);
    cout <<"\n\ncloned list : ";
    display(newhead);


   
}