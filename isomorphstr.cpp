#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool generate(string s, string t){
    unordered_map<char, char> check;
    bool flag = true;

    for (int i = 0; i < s.length(); i++)
    {
        if (check.find(s[i]) == check.end())
        {
            check[s[i]] = t[i];
        }
        else
        {
            if (check[s[i]] == t[i]){
                continue;
            }

            else{
                flag = false;
                break;
            }
        }
    }


    for (auto i : check){
        cout << i.first << "  " << i.second << endl;
    }
    
    return flag;
}

bool isIsomorphic(string s, string t) {

    if (generate(s,t) == true && generate(t,s) == true){
        return true;
    }else{
        return false;
    }
    

}

/*
"bbbaaaba"
"aaabbbba"
*/

int main()
{
    //cout << generate("bar", "foo") << endl;
    //cout << generate("foo", "bar") << endl;
    //cout << generate("bbbaaaba", "aaabbbba") << endl;
    //cout << generate("aaabbbba", "bbbaaaba") << endl;
    return 0;
}