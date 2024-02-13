#include<iostream>
#include<vector>
using namespace std;


bool isSafe(int srcx, int srcy, int newsrcx, int newsrcy, int row, int col, vector<vector<bool>>& visited, int maze[][4]) {
    if (maze[newsrcx][newsrcy] == 1 && newsrcx >= 0 && newsrcx < row && newsrcy >= 0 && newsrcy < col && !visited[newsrcx][newsrcy]) {
        return true;
    }
    else {
        return false;
    }
}

void printallPaths(int maze[][4], int row, int col, int srcx, int srcy, string output, vector<vector<bool>>& visited) {
    if (srcx == row - 1 && srcy == col - 1) {
        cout <<  endl << output << endl;
        return;
    }

    // right
    if (isSafe(srcx, srcy, srcx, srcy + 1, row, col, visited, maze)) {
        visited[srcx][srcy + 1] = true;
        printallPaths(maze, row, col, srcx, srcy + 1, output + 'R', visited);
        visited[srcx][srcy + 1] = false;
    }

    // up
    if (isSafe(srcx, srcy, srcx - 1, srcy, row, col, visited, maze)) {
        visited[srcx - 1][srcy] = true;
        printallPaths(maze, row, col, srcx - 1, srcy, output + 'U', visited);
        visited[srcx - 1][srcy] = false;
    }

    // down
    if (isSafe(srcx, srcy, srcx + 1, srcy, row, col, visited, maze)) {
        visited[srcx + 1][srcy] = true;
        printallPaths(maze, row, col, srcx + 1, srcy, output + 'D', visited);
        visited[srcx + 1][srcy] = false;
    }

    // left
    if (isSafe(srcx, srcy, srcx, srcy - 1, row, col, visited, maze)) {
        visited[srcx][srcy - 1] = true;
        printallPaths(maze, row, col, srcx, srcy - 1, output + 'L', visited);
        visited[srcx][srcy - 1] = false;
    }
}

int main() {
    int maze[4][4] = {
        {1, 0, 0, 0},
        {1, 1, 0, 0},
        {1, 1, 1, 0},
        {1, 1, 1, 1}
    };
    int srcx = 0;
    int srcy = 0;
    int row = 4;
    int col = 4;
    string output = " ";
    vector<vector<bool>> visited(row, vector<bool>(col, false));

    if (maze[0][0] == 0) {
        cout <<output<< endl;
    }
    else {
        visited[srcx][srcy] = true;
        printallPaths(maze, row, col, srcx, srcy, output, visited);
    }

    return 0;
}
