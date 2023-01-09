#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void reverseWords(string s) {
    vector<string> words;

    string res;
    
    string temp = "";



    for (int i = 0; i < s.length(); i++){
        if (isspace(s[i]) || i == s.length() - 1)
        {
            if (i ==  s.length() - 1){
                temp += s[s.length() - 1];
            }
            
            words.push_back(temp);
            temp = "";            
        }else{
            temp += s[i];
        }
    }
    reverse(words.begin(), words.end());
    
    for (int i = 0; i < words.size(); i++){
        reverse(words[i].begin(), words[i].end());
        //cout << words[i] << " ";
    }

    for (int i = 0; i < words.size(); i++){
        res += words[i];

        if (i == words.size() - 1){
            continue;;
        }else{
            res += " ";
        }
        
    }

    cout << res;
}

void restoreString(string s, vector<int>& indices) {
        string res;

        for (int i = 0; i < s.length(); i++){
            int posInd = indices[i];
            //cout << s[i] << " " << posInd << endl;
            res.insert(res.begin() + posInd, 1, s[i]);
        }
        
        cout << res;
}


int main()
{
    //reverseWords("This me");
    string s = "codeleet";
    char newstr[s.length()];
    string res = "";
    vector<int> indices = {4,5,6,7,0,2,1,3};

    

    cout << s;
    

    // for (int i = 0; i < s.length(); i++){
    //     int posInd = indices[i];
    //     //cout << s[i] << " " << posInd << endl
    //     newstr[posInd] = s[i];
    //     //newstr.insert(newstr.begin() + posInd, 1, s[i]);
    // }

    // for (int i = 0; i < s.length(); i++){
    //     res += newstr[i];
    // }

    // cout << res;
    //restoreString(s, indices);

    return 0;
}