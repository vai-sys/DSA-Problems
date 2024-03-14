#include<iostream>
#include<stack>
using namespace std;

bool checkRedundant(string &str){
    stack<char> st;
    
    for(int i = 0; i < str.length(); i++){
        char ch = str[i];
        
        if(ch == '+' || ch == '-' || ch == '/' || ch == '*' || ch == '(') {
            st.push(ch);
        }
        else if(ch == ')') {
            int operatorCnt = 0;
           
            while(!st.empty() && st.top() != '(') {
                if(st.top() == '+' || st.top() == '-' || st.top() == '/' || st.top() == '*') {
                    operatorCnt++;
                }
                st.pop();
            }
            st.pop(); 
            
            if(operatorCnt == 0){
                return true;
            }
        }
    }
    return false;
}

int main()
{
    string s = "(a+b+(a))";
    if (checkRedundant(s)) {
        cout << "YES\n";
    }
    else {
        cout << "NO";
    }
}

// int main(){
//     string s = "((ab))";
//     if(checkRedundant(s)){
//         cout << "Redundant string";
//     }
//     else{
//         cout << "Non Redundant string" << endl;
//     }
//     return 0;
// } 
