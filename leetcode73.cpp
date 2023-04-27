#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void setZeroes(vector<vector<int>>& matrix) {
    
    //Storing values in set so as no duplicates are entered
    //Thus we willn't be doing operations repeteadly
    set<int> zeroPlaceX;
    set<int> zeroPlaceY;
    
    int c = matrix[0].size(); //matrix[0].size() = columns
    int r = matrix.size(); //matrix.size() = rows
    cout << "Columns:" << c << endl;
    cout << "Rows:" << r << endl;

    //Finding the points for 0 elements in matrix
    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++){
            if (matrix[i][j] == 0){
                zeroPlaceX.insert(i);
                zeroPlaceY.insert(j);
                // cout << i << " " << j << endl;
            }
        }  
    }
    
    //For making row 0
    for (int i: zeroPlaceX){
        for (int j = 0; j < c; j++){
            matrix[i][j] = 0;
        }
    }

    //For making column 0
    for (int i: zeroPlaceY){
        for (int j = 0; j < r; j++){
            matrix[j][i] = 0;
        }
    }

    for(int i=  0; i < r; i++){
        for (int j = 0; j < c; j++){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

}

int main()
{
    vector<vector<int>> matrix = {{0,1,2,0}, {3,4,5,2}, {1,3,1,5}};
    vector<vector<int>> matrix1 = {{1,1,1},{1,0,1}, {1,0,1}, {1,1,1}};
    setZeroes(matrix);
    return 0;
}