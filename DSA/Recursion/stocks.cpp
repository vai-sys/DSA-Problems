#include<iostream>
#include<vector>
#include<limits>
using namespace std;

void profit(vector<int>&price,int index,int&minprice,int&maxprofit){
if(index==price.size()){
    return;
}
if(price[index]<minprice){
    minprice=price[index];
}
int totalprofit=price[index]-minprice;
if(totalprofit > maxprofit){
maxprofit=totalprofit;
}
profit(price,index+1,minprice,maxprofit);
}

int stocks(vector<int>&price){
int minprice=INT16_MAX;
int maxprofit=INT16_MIN;
int index=0;
profit(price,index,minprice,maxprofit);
return maxprofit;
}

int main(){

    vector<int>price={7,1,5,3,6,4};
     int result=stocks(price);
     cout<<"maxprofit is"<<endl<<result<<endl;
     return 0;

}