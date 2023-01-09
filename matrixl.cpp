#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void display(int ar[3][3]){
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            cout << ar[i] << " ";
        }
        cout << endl;
    }
}

int largeMatrix(vector<vector<int>>&grid, int x, int y){
    int adjmatrix[3][3];

    int r = x+1; int c = y+1;
    //Enter values in adjmatrix
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            adjmatrix[i][j] = grid[r][c];
            c++;
        }
        c = 0;r++;
    }

    display(adjmatrix);
}

int main()
{
    vector<vector<int>> grid = {
        {9,9,8,1},
        {5,6,2,6},
        {8,2,6,4},
        {6,2,2,2}
    };

    int col = grid[0].size();
    int row = grid.size();

    int res[row - 2][col - 2];

    for (int i = 0; i < row; i++){
        for (int j = 0; j < col; j++){
            res[i][j] = largeMatrix(grid, i, j);
        }
    }

    return 0;
}