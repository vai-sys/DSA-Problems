#include<iostream>
#include<algorithm>
using namespace std;
int Duplicate(int myArray[],int n){
sort(myArray, myArray + n);
int duplicate=-1;
for(int i=0;i<n-1;i++){
if(myArray[i]==myArray[i+1]){
    duplicate=myArray[i];
        break;}
}
return duplicate;
      

}


int main(){
    int n=6;
    int arr[]={1,5,6,2,7,2};
    int ans=Duplicate(arr,n);
    cout<<"Duplicate Number is\n "<<ans;
    return 0;
}

