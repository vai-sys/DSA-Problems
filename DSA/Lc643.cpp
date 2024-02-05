#include<iostream>
#include<vector>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;
double Subaaray(vector<int>nums,int k){
int start=0;
int end=k;
int sum=0;
for(int i=0;i<end;i++){
sum+=nums[i];
}
int maxsum=sum;


while(end < nums.size()){
    sum=sum-nums[start];
    start++;
    sum=sum+nums[end];
    end++;
    maxsum=max(maxsum,sum);

}
return (double )maxsum/k;

}
int main(){
    vector<int>array={1,12,-5,-6,50,3};
    int k=4;
    double ans=Subaaray(array,k);
    cout<<" Maximum average of subarray is \n"<<fixed << setprecision(4) << ans << endl;
    return 0;
}