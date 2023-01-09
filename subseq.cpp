#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void display(vector<int> ar){
    for(int i = 0; i < ar.size(); i++){
        cout << ar[i] << " ";
    }
    cout << endl;
}

bool isSubsequence(string s, string t) {

    vector<int> arr;
    int ptr = 0;
    
    for (int i = 0; i < s.length(); i++){
        int flag = 1;
        for (int j = 0; j < t.length(); j++){
            if (s[i] == t[j]){
                flag = 1;
                break;
            }else{
                flag = 0;
            }
        }
        arr.push_back(flag);
    }
    
    

    for (int i = 0; i < arr.size(); i++){
        if (arr[i] == 0){
            ptr = 0;
            break;
        }
        ptr = 1;
    }
    
    if (ptr == 0){
        return false;
    }else{
        return true;
    }
    //cout << ptr << endl;
}

int main()
{
    bool res = isSubsequence("acb","ahcgdb");
    cout << res;
    return 0;
}