#include<iostream>
using namespace std;


int duplicate(int num[],int n){
    int duplicate=-1;
    for(int i=0;i<n;i++){
        int index=abs(num[i]);
        if(num[index]>0){
            num[index]*=-1;
        }
        else{
            duplicate=index;
            return duplicate;

        }
    }
    return duplicate;
}

// int duplicate(int nums[],int n){
//    while(nums[0]!=nums[nums[0]]){
//     swap(nums[0],nums[nums[0]]);

//    }
//    return nums[0];
// }

int main(){
    int nums[]={1,3,2,4,2};
    int n=5;
    int ans=duplicate(nums,n);
    cout<<"ans is "<<ans;
    return 0;
     
}












// #include<iostream>
// #include<algorithm>
// using namespace std;
// int Duplicate(int myArray[],int n){
// sort(myArray, myArray + n);
// int duplicate=-1;
// for(int i=0;i<n-1;i++){
// if(myArray[i]==myArray[i+1]){
//     duplicate=myArray[i];
//         break;}
// }
// return duplicate;
      

// }


// int main(){
//     int n=6;
//     int arr[]={1,5,6,2,7,2};
//     int ans=Duplicate(arr,n);
//     cout<<"Duplicate Number is\n "<<ans;
//     return 0;
// }

