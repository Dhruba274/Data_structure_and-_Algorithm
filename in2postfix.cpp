#include<iostream>
#include<string>
#include<stack>

using namespace std;

    int getsize(const string& str){
			int size = 0;
			for (char c: str){
					size++;
		}
	return size;
		}
int presedence(char ch){

	if (ch == '^')
		return 3;
	else if ((ch == '*' )|| (ch = '/'))
	    return 2;
	else if((ch = '+' )|| (ch = '-'))
	    return 1;
	
        return 0;
    }  
bool is_operator(char ch){
	 return (ch == '+'|| ch == '-'||ch == '*'||ch == '^'||ch == '+');
		}	
/*int isOperand(char ch){
       return (ch >= ’a’ && ch <= ’z’) || (ch >= ’A’ && ch <=’Z’) || (ch >= ’0’ &&ch<=’9’);
 		}*/
 void  infixtopostfix(string s){
           
			  stack<char>st;
		     string result;

		    for (int i = 0;i<getsize(s);i++){
		             char c = s[i];
            if((c>= 'a' && c<= 'z') || (c>= 'A' && c<= 'Z') || (c>= '0' && c<= '9' ))
		         result += c;

           else if (c == '(')
	            st.push('(');
           else if (c == ')'){
                 while(st.top() != '('){
                           result+= st.top();
                           st.pop();
                   }
                         st.pop();
              }

                 else{

                    while(!st.empty() && presedence(s[i]) <= presedence(st.top())){
                          result+= st.top();
                             st.pop();
                    }
                   st.push(c);
                }
            }
         while (!st.empty()){
                result+= st.top();
                  st.pop();
            }
               cout<<result<<endl;
}

int main(){
string exp;
cout<<"Enter An Expression";
cin>>exp;
infixtopostfix(exp);
return 0;
}
		





