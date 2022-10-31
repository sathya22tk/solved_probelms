//
#include<bits/stdc++.h>
using namespace std;

int main(){
    
    deque<int> dq; //{ }

    dq.push_back(10); //{10}
    dq.emplace_back(20); //{10,20}

    dq.push_front(30); //{30,10,20}
    dq.emplace_back(40); //{40,30,10,20}

    dq.pop_back(); //{40,30,10}
    dq.pop_front(); //{30,10}

}
