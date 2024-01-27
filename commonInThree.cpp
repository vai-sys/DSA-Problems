#include<iostream>
#include<vector>
#include<set>
using namespace std;

vector<int>common(int a[],int b[],int c[],int n1,int n2,int n3){
    vector<int>answer;
     set<int>st;
     int i=0;int j=0;int k=0;
     while(i<n1 && j<n2 && k<n3){
        if(a[i]==b[j] && b[j]==c[k] && a[i]==c[k]){
            st.insert(a[i]);
            i++,j++,k++;
        }
        else if(a[i]<b[j]){
            i++;
             

        }
        else if(  b[j]<c[k]){
          j++;
        }
        else{
            k++;
        }

     }
     for(auto i:st){
        answer.push_back(i);
     }
     return answer;
    
}

int main(){
    int a[]={1,5,10,20,40,80};
    int b[]={6,7,20,80,100};
    int c[]={3,4,15,20,30,70,80,120};
    int n1=6;
    int n2=5;
    int n3=8;
    vector<int>ans=common(a,b,c,n1,n2,n3);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<endl;
    }
    
    return 0;
}