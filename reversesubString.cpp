#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void reverseStr(string& str, int n, int i)
    {    
        if(n<=i){return;}
        //  Swapping the character
        swap(str[i],str[n]);
        reverseStr(str,n-1,i+1);
    }


string reverseParentheses(string s) {
    vector<int> openParan;
    string result;

    //A loop through the string
    for (int i  = 0; i < s.length(); i++){
        //Finding the open paranthesis
        if (s[i] == '('){
            openParan.push_back(i);
        }

        //When we find closing paranthesis
        if (s[i] == ')'){
            int size_first = openParan.size() - 1;
            openParan.pop_back();
            reverse(s.begin()+size_first,s.begin()+i);
            cout << s << endl;
        }
    }

    //The result string
    for (char x: s){
        if (x == '(' || x == ')'){
            continue;
        }
        else{
            result+=x;
        }
    }

    return result;
    
}

    int main(){
        cout << reverseParentheses("(u(love)i)");
    }