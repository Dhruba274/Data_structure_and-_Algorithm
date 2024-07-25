#include <bits/stdc++.h>
using namespace std;

bool isOperand(char ch){
    return (ch>='a' && ch<='z') || (ch>='A' && ch <='Z');
}

string prefixToInfix(string prefix) {
  stack<string> st;
 
  int len = prefix.size();
  for (int i = len - 1; i >= 0; i--) {
      if(isOperand(prefix[i])){
          
          st.push(string(1,prefix[i]));
         
      }
      else{
          string operand1=st.top();
          st.pop();
          
          string operand2=st.top();
          st.pop();
          
          st.push("(" + operand1 + string(1,prefix[i]) + operand2 + ")");
      }
  }
  return st.top();
}

int main() {
    
    string prefix="*-a/bc-/ade";
    string infix=prefixToInfix(prefix);
    cout<<"Prefix expression : "<<prefix<<endl;
    cout<<"Infix expression : "<<infix<<endl;
    
    return 0;
}