//reverse a string without pointer,and no extra space
#include<bits/stdc++.h>
using namespace std;
string reverse(string s){
    int len = s.length();
   for(int i = 0;i < len/2;i++)
      swap(s[i],s[len-1-i]);
   return s;
}
int main(){
   int len;
   string s;
   cout << "enter the string: ";
   getline(cin,s);
   s = reverse(s);
  cout <<endl << s;

	
}
