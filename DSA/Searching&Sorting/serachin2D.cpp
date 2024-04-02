#include<iostream>
#include<vector>
using namespace std;
int twoD(vector<vector<int>>&mat,int target){
    int rowsize=mat.size();
    int colsize=mat[0].size();
    int matsize=rowsize*colsize;

    int start=0;
    int end=matsize-1;
  
    while(start<=end){
          int mid=start+(end-start)/2;
        int rowIndex=mid/colsize;
        int colIndex=mid % colsize;
        int current=mat[rowIndex][colIndex];
        if(target==current)return true;
        if(target>current){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return false;

}

int main() {
    
    vector<vector<int>> matrix = {
        {1, 3, 5, 7},
        {10, 11, 16, 20},
        {23, 30, 34, 60}
    };

    int target = 9;

    if (twoD(matrix, target)) {
        cout << "Target found in the matrix." << endl;
    } else {
        cout << "Target not found in the matrix." << endl;
    }

    return 0;
}
