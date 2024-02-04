#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int>Add(int arr1[],int n1,int arr2[],int n2){
     vector<int>ans;
    int i=n1-1;
    int j=n2-1;
    int carry=-1;
    while(i>=0 && j>=0){
      int x=arr1[i]+arr2[j]+carry;
      int digit=x % 10;
      ans.push_back(digit);
      carry=x/10;
      i--;
      j--;
    }
    while(i>=0){
        int x=arr1[i]+0+carry;
      int digit=x % 10;
      ans.push_back(digit);
      carry=x/10;
      i--;
    }
    while(j>=0){
        int x=0+arr2[j]+carry;
      int digit=x % 10;
      ans.push_back(digit);
      carry=x/10;
      j--;
    }
    if(carry>0){
        ans.push_back(carry);
    }
    if(ans[ans.size()-1]==0){
        ans.pop_back();
    }
    reverse(ans.begin(),ans.end());
    return ans;

}

int main(){
    int arr1[]={9,5,4,9};
    int arr2[]={2,1,4};
    int n1=4;
    int n2=3;
    vector<int>result=Add(arr1,n1,arr2,n2);
    cout<<" Sum of the array elements is : "<<" ";
    for(auto i:result){
        cout<<i<<" ";
    }
    return 0;
}