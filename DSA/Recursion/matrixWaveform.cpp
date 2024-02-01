#include<iostream>
#include<vector>
using namespace std;
void matrixwaveform(vector<vector<int>>matrix){
    int row=matrix.size();
    int col=matrix[0].size();
    for(int startcol=0;startcol<col;startcol++){
        if((startcol & 1)==0){
           for(int i=0;i<row;i++){
            cout<<matrix[i][startcol]<<"  ";
           }
        }
        else{
            for(int i=row-1;i>=0;i--){
                cout<<matrix[i][startcol]<< " ";
            }
        }


    }

}


int main(){
    vector<vector<int>>matrix={
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12}
        };
        matrixwaveform(matrix);
        return 0;
}