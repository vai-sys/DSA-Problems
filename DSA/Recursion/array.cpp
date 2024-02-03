#include<iostream>
#include<vector>
using namespace std;

vector<int> SpiralOrder(vector<vector<int>>& matrix) {
    vector<int> ans;
    if (matrix.empty()) return ans; // Handling edge case of empty matrix
    int m = matrix.size();
    int n = matrix[0].size();
    int totalelements = m * n;
    int startingrow = 0;
    int startingcol = 0;
    int endingrow = m - 1;
    int endingcol = n - 1;
    while (ans.size() < totalelements) {
        // Traverse Right
        for (int i = startingcol; i <= endingcol && ans.size() < totalelements; i++) {
            ans.push_back(matrix[startingrow][i]);
        }
        startingrow++;

        // Traverse Down
        for (int i = startingrow; i <= endingrow && ans.size() < totalelements; i++) {
            ans.push_back(matrix[i][endingcol]);
        }
        endingcol--;

        // Traverse Left
        for (int i = endingcol; i >= startingcol && ans.size() < totalelements; i--) {
            ans.push_back(matrix[endingrow][i]);
        }
        endingrow--;

        // Traverse Up
        for (int i = endingrow; i >= startingrow && ans.size() < totalelements; i--) {
            ans.push_back(matrix[i][startingcol]);
        }
        startingcol++;
    }
    return ans;
}

int main() {
    vector<vector<int>> matrix = {
        {1, 2, 3, 4, 5, 6},
        {7, 8, 9, 10, 11, 12},
        {13, 14, 15, 16, 17, 18},
        {19, 20, 21, 22, 23, 24},
        {25, 26, 27, 28, 29, 30}
    };
    vector<int> result = SpiralOrder(matrix);
    cout << "Result is" << endl;
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}
