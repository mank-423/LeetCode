#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void display(vector<int> a){
    for (auto x : a){
        cout << x << " ";
    }
    cout << endl;
}

int main()
{
    vector<int> ar = {1,2,1,4,5};
    // ar.push_back(1);ar.push_back(3);ar.push_back(2);ar.push_back(1);
    map<int, vector<int>> count;
    vector<int> res;
    int target = 7;

    for (int i = 0; i < ar.size(); i++){
        count[ar[i]].push_back(i);
    }

    for (auto i = count.begin(); i != count.end(); i++)
    {
        for (auto j = ++i; j != count.end(); j++)
        {
            if (i->first + j->first == target){
                res.push_back(i->second[0]);
                res.push_back(j->second[0]);
                break;
            }
        }
    }

    display(res);

    // cout << "Element  Index" << endl;
    // for (auto i : count){
    //     cout << i.first << "         "; display(i.second);
    // }

     string s=  "title";
     for (int i = 0; i < s.length(); i++){
        cout << s[i] <<" ";
     }

    return 0;
}