#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void Rotate(vector<vector<int>>&mat){
int n=mat.size();
for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
       swap(mat[i][j], mat[j][i]);
    }
}
for(int i=0;i<n;i++){
    reverse(mat[i].begin(),mat[i].end());
}

}
int main(){
vector<vector<int>>mat={
    {1,2,3},
    {4,5,6},
    {7,8,9},
};

Rotate(mat);
for(auto row:mat){
    for(auto num:row){
        cout<<num<<" ";
    }
    cout<<endl;
}

return 0;


}
