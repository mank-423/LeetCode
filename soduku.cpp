#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool checkForTwo(map<char, int> mp){
    for (auto i: mp){
        if (i.second == 2){
            return false;
            break;
        }
    }  
    return true;
}

bool columnCheck(vector<vector<char>>&board){
    bool flag = true;

    for (int i = 0; i < board.size(); i++){
        map<char, int> columnCount;

        for (int j = 0; j < board[0].size(); j++){
            if (board[i][j] == '.'){
                continue;
            }else if (columnCount.find(board[i][j]) != columnCount.end()){
                columnCount[board[i][j]] +=1;
            }else{
                columnCount[board[i][j]] = 1;
            }
        }

        if (!checkForTwo(columnCount)){
            flag = false;
            break;
        }
    }
    return flag;
}


bool rowCheck(vector<vector<char>>&board){
    bool flag = true;

    for (int i = 0; i < board.size(); i++){
        map<char, int> columnCount;

        for (int j = 0; j < board[0].size(); j++){
            if (board[j][i] == '.'){
                continue;
            }

            else if (columnCount.find(board[j][i]) != columnCount.end()){
                columnCount[board[j][i]] +=1;
            }
            else{
                columnCount[board[j][i]] = 1;
            }
        }

        if (!checkForTwo(columnCount)){
            flag = false;
            break;
        }
    }
    return flag;
}


bool isBoxValid(vector<vector<char>>&board){
    bool flag = true;
    int change  = 0;
    vector<vector<int>> indices = {
        {0,0}, {0,1}, {0,2}, {1,0}, {1,1}, {1,2}, {2,0}, {2,1}, {2,2}
    };
    
    for (int i = 0 ; i <= 8; i+=3){
        map<char,int>Count;
        for (auto i: indices){
            if (board[i[0]][i[1]] == '.'){
                    continue;
            }
            else if (Count.find(board[i[0]][i[1]]) != Count.end()){
                Count[board[i[0]][i[1]]] +=1;
            }
            else{
                Count[board[i[0]][i[1]]] = 1;
            }
        }
        if (!checkForTwo(Count)){
            flag = false;
            break;
        }

        else{
            change++; // Change of the box
            if (change % 3 == 0){
                for (auto i: indices){
                    i[0] += i[0] + 3;
                    i[1] -= 6;
                }
            }
            else{
                for (auto i: indices){
                    i[1]+=3;
                }
            }
        }
    }

    return flag;
    
    
}


bool isValidSudoku(vector<vector<char>>& board) {
    
}


int numJewelsInStones(string jewels, string stones) {
    map<char, int> count;
    vector<int> visited;
    int sum = 0;

    for (int i = 0; i < jewels.size(); i++){
        for (int j = 0; j < stones.size(); j++){
            if (jewels[i] == stones[j]){
                visited.insert(visited.begin()+j, 0);
                count[jewels[i]] += 1;
            }
        }
    }  

    for (auto i: count){
        sum+=i.second;
    }  
    
    return sum;
}

int main()
{
    cout << numJewelsInStones("zz", "ZzZ");

    return 0;
}