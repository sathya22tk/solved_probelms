//find nth fibbonacci number using recursion
#include<bits/stdc++.h>
using namespace std;

int f(int n){

    if(n == 2) return 1;
    if(n <= 1) return 0;

    return f(n-1) + f(n-2);
}

int main(){

    cout << f(4);
}