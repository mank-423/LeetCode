#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int arrayPairSum(vector<int>& nums) {
    vector<vector<int>> res;
    int sum = 0;

    sort(nums.begin(), nums.end());
    
    for (int i = 0; i < nums.size(); i+=2){
        vector<int> temp;
        temp.push_back(nums[i]);
        temp.push_back(nums[i+1]);
        cout <<nums[i] << "," << nums[i+1] << endl;
        res.push_back(temp);
    }

    for (int i = 0; i < res.size(); i++)
    {   
        sum += min(res[i][0], res[i][1]);
    }

    cout << sum;
    return 1;
        
}

int main()
{
    vector<int> a1 = {6,2,6,5,1,2};
    arrayPairSum(a1);
    return 0;
}