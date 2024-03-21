#include<iostream>
#include<stack>
#include<vector>
using namespace std;

vector<int> collision(vector<int>& asteroid){
    stack<int>st;
    for(auto ast:asteroid){
       if(ast > 0){
        st.push(ast);
       }
       else{
        // ast is negative
        while(!st.empty() && st.top()>0){
            if(abs(ast)==st.top()){
                st.pop();
                break;
            }
            else if(abs(ast >st.top())){
                st.push(ast);
            }
            else{
                break;
            }
        }





       }

       if(st.empty()|| st.top()<0){
        st.push(ast);
       }
       


    }

    vector<int>ans(st.size());
    for(int i=st.size()-1;i>=0;i--){
        ans[i]=st.top();
        st.pop();
    }
    return ans;

}

int main(){
    vector<int>asteroid={5,10,-5};
    vector<int> result=collision(asteroid);
  for( auto ch:result){
    cout<<ch<<endl;
  }
  return 0;
}
