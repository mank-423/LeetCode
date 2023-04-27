#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n1 = 3459;
    vector<int> digits;
    vector<int> result;


    //Seperating each digit
    int temp = n1;
    while (temp != 0){
        int rem = temp % 10;
        temp = temp / 10;
        digits.push_back(rem);
    }

    //Adding +2 to every digit seperated
    for (int i: digits){
        if (i <= 7){
            result.push_back(i+2);
        }

        //Any single digit couldnt be greater than 9 
        //So subtracting 10 from digit greater than 10
        else{
            result.push_back((i+2) - 10);
        }
    }

    reverse(result.begin(), result.end());

    for (auto i: result){
        cout << i << endl;
    }
    

    //Iske baad to bs wo array ko int me banana hai bssssss
    
    return 0;
}