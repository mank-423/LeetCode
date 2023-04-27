#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;


void mostVisited1(int n, vector<int>& rounds) {
    map<int, int> visitCount;
    vector<int> visited;
    vector<int> result;

    for (int i = 1; i <= n; i++){
        visitCount[i] = 0;
    } 

    for (auto i: visitCount){
        cout << i.first << "-" << i.second << endl;
    }
   
    int runPtr = 0;
    for (int i = 0; i < rounds.size(); i++){
        runPtr = rounds[i];   
        if (i == rounds.size() - 1){
            visitCount[runPtr] += 1;
        }
        while (runPtr != rounds[i+1]){
            visitCount[runPtr]+=1;
            if (runPtr == n){
                runPtr = 1;
            } 
            else {
                runPtr++;
            }
        }
    }

    for (auto i: visitCount){
        cout << i.first << "-" << i.second << endl;
    }

     //Getting all the count values in an array
    for (auto x: visitCount){
        visited.push_back(x.second);
    }
    //Sort the values of the array
    sort(visited.begin(), visited.end());
    int max = visited[visited.size() - 1]; //Max element count
    cout << max;
    //Comparing data in hash map
    for (auto i: visitCount){
        //Comparing key with max count
        if (i.second == max){
            cout<< i.first <<" ";
            result.push_back(i.first); //Inserting the result 
        }
    }
}


void mostVisited2(int n, vector<int>& rounds){
    vector<int> count(n);
    for (int i = 0; i < rounds.size(); i++){
        int ptr = rounds[i] - 1; //For 0 based array
        //1 3 2 1 
        if (ptr == rounds[rounds.size() - 1]){
            count[rounds.size() - 1] += 1;
        }else{
            while (ptr != rounds[i + 1]){
                count[i] += 1;
                ptr++;
                ptr = ptr % n;
            }
        }
    }
}


int main(){
    vector<int> rounds = {1,3,1,2};
    mostVisited1(4, rounds);
    return 0;
}