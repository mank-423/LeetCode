#include<stdio.h>
#include<bits/stdc++.h>

using namespace std;


int longestSubstring(string s, int k) {
    map<char, int> countWords;
    vector<char> acceptChar;
    string result;

    //Finding the frequency of character
    for (char c: s){
        if (countWords.find(c) == countWords.end()){
            countWords[c] = 1;
        }else{
            countWords[c] +=1;
        }
    }

    //Accepted characters
    for (auto it: countWords){
        if (it.second >= k){
            acceptChar.push_back(it.first);
        }
    }

    // for (char c: acceptChar){
    //     cout << c << endl;
    // }
    
    int charPtr = 0;
    for (int i = 0; i < s.size(); i++){
        if (find(acceptChar.begin(), acceptChar.end(), s[charPtr]) != acceptChar.end()){
            result += s[charPtr];  
        }else{
            result.erase();
        }
        charPtr++;
    }

    for (char c: result){
        cout << c << endl;
    }

    return result.size();
}

int main(){
    longestSubstring("ababacb", 3);
    return 0;
}