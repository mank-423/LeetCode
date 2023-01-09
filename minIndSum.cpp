#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int firstUniqChar(string s) {
    map<char, int> letterCount;
    
    for (int i = 0; i < s.size(); i++){
        if (letterCount.find(s[i]) != letterCount.end()){
            letterCount[s[i]] += 1;
        }else{
            letterCount[s[i]] = 1;
        }
    }
    
    for (int i = 0; i < s.size(); i++){
        if (letterCount.find(s[i]) != letterCount.end() && letterCount[s[i]] == 1){
            cout << i << endl;
            break;
        }
    }

    // for (auto i: letterCount){
    //     cout << i.first << "  " << i.second << endl;
    // }
    
    return 1;
}


vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) { 
    map<string, int> mp;
    vector<string> words;
    int low = 100;
    
    //Finding common and sum of indices
    for (int i = 0; i < list1.size(); i++){
        for (int j = 0; j < list2.size(); j++){
            if (list1[i] == list2[j]){
                mp[list1[i]] = i+j; //Sum
                
                if (low > (i+j)){ //Condition to check for lowest sum
                    low = i+j;
                }
            }
        }
    }
    //Check for smallest sum
    // for (auto i: mp){
    //     if (low > i.second){
    //         low = i.second;
    //     }
    // }

    //Search and add in array
    for (auto i: mp){
        if (i.second == low){
            words.push_back(i.first);
        }
    }

    if (words.size() > 1){
        sort(words.begin(), words.end());
    }
    
    return words;
}


int main()
{
    /*
    vector<string> list1 = {"happy","sad","good"};
    vector<string> list2 = {"sad","happy","good"};
    vector<string> result;
    result = findRestaurant(list1, list2);

    for (auto i: result){
        cout << i << " "; 
    }
    */

    firstUniqChar("leetcode");
    return 0;
}