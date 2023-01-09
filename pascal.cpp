#include<iostream>
#include<string>
#include<bits/stdc++.h>

using namespace std;

void display(string s){
    for (int i = 0; i < s.size(); i++){
        cout << s[i];
    }
    cout << "\n";
}

int main()
{
    string a = "1011";
    string b = "1";
    string res;

    //Size of the strings
    int n1 = a.length();
    int aInd = 0;
    int n2 = b.length(); 
    int bInd = 0;
    
    char rem = '0';
    //Making a new string to use for addition
    string c;
    
    //1. Add 0's
    if (n1 > n2){
        for(int i = 0; i < n1 - n2; i++){c.insert(c.begin() + i, '0');}
        for (int i = n1 - n2; i < n1; i++){c.insert(c.begin() + i, a[aInd]);aInd++;}
    }
    else{
        for(int i = 0; i < n2 - n1; i++){c.insert(c.begin() + i, '0');}
        for (int i = n1 - n2; i < n2; i++){c.insert(c.begin() + i, b[bInd]);bInd++;}
    }
    

    //Addition of the char
    //00, 01, 10, 11
    for (int i = max(n1, n2) - 1; i >= 0; i++){
        if (a[i] == '0' && b[i] == '0'){
            if (rem == '0'){
                res.insert(res.begin()+i, '0');
            }else{
                res.insert(res.begin()+i, '1');
            }
        }
        
        else if (a[i] == '0' && b[i] == '1' || a[i] == '1' && b[i] == '0'){
            if (rem == '0'){
                res.insert(res.begin()+i, '1');
            }else{
                res.insert(res.begin()+i, '0');
                rem = '1';
            }
        }
        
        else if (a[i] == '1' && b[i] == '1'){
            if (rem == '0'){
                res.insert(res.begin()+i, '0');
                
            }else{
                res.insert(res.begin()+i, '1');
            }
            rem = '1';
        }
    }
    

    // display(res);
    cout << res;

    return 0;
}