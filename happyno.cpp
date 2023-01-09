#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void display(vector<int> a){
    for (auto x : a){
        cout << x << " ";
    }
    cout << endl;
}

vector<int> numSplit(int n){
    int temp = 0;
    vector<int> digits;
    while (n != 0){
        temp = n % 10;
        digits.push_back(temp);
        n = n / 10;
    }

    return digits;
}

int squareDigits(vector<int> d){
    int total = 0;
    for (auto x: d){
        total += x*x;
    }
    return total;
}

int main()
{   
    vector<int> numDigits;
    int n = 19;
    numDigits = numSplit(1);
    
    int total = squareDigits(numDigits);//do the squares and if 1 found then stop
    display(numSplit(-121));    

    // if (total != 1){
    //     while (total != 1){
            
    //         numDigits = numSplit(total);//store the split of digit
    //         total = squareDigits(numDigits); 
    //     }
    // }else{
    //     cout << "true";
    // }
    

    
}