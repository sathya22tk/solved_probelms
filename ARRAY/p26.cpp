#include<bits/stdc++.h>
using namespace std;

// Brute
// 1. put words into the stack
 //2. pop out each word from the stack
int main(){
   string s = "i  go to   manali";
   string str = "";
   s += " ";
   stack<string> st;
    
    for(int i = 0; i < s.length(); i++){
        if(s[i] == ' '){
            if(str != "")
                st.push(str);
            str = "";
        }
        else{
            str += s[i];
        }
    }
    
    while(!st.empty()){
        str += st.top() + " ";
        st.pop();
    }
    cout << str<< " "<< str.length();
}


// optimal
// Iterate and plug out each word and concatenate in reverse order
int main(){
   string s = "TUF is great for interview preparation";
   s += " ";
   string ans = "";
   string temp = "";
  
  
  
  
  for(int i = 0; i < s.length(); i++){
      if(s[i] == ' '){
            if(temp != "")
                ans = temp + " " + ans; 
            temp = "";
      }else{
          temp += s[i];
      }
  }
  
  cout << ans << ans.length();

}