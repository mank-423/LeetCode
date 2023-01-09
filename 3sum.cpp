#include<iostream>
#include<bits/stdc++.h>
using namespace std;


void threeSum(vector<int>& nums) {
    vector<vector<int>> res;

    for (int i = 0; i < res.size(); i++){
        vector<int> temp;
        for (int j = 0; j < res.size(); j++){
            for (int k = 0; k < res.size(); k++){
                if (i != j && j != k && i != k){
                    if (nums[i]+nums[j]+nums[k] == 0){
                        temp.push_back(nums[k]);
                    }
                }
            }
            temp.push_back(nums[j]);
        }
        temp.push_back(nums[i]);
        res.push_back(temp);
    }

    for (int i = 0; i < res.size(); i++){
        for (int j = 0; j < res[i].size(); j++){
            cout << res[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    vector<int> ip = {-1,0,1,2,-1,-4};

    threeSum(ip);

    


    return 0;
}