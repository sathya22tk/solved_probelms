//
#include<bits/stdc++.h>
using namespace std;

int main(){
    list<int> ls;
    //=> it is same like vector only difference is list 
    //   accept the front function(insert element in front which 
    //   less costlier than insert function in vecctor)
    //=> since internal operations of list is doubly linkedlist
    ls.push_back(10); //{10}
    ls.emplace_back(20); // {10,20}

    ls.push_front(30); // {30,10,20,}
    ls.emplace_front(40) // {40,30,10,20}

    //rest functions are same as vector
    //begin(),end(),size(),swap()


}
