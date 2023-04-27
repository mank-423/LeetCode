#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int maximumGap(vector<int>& nums) {
    int maxDifference = 0; //Finding maximum difference bw elements
    int result = 0; //Finding count of the pairs

    //Base condition for the problem
    if (nums.size() < 2){
        return 0;
    }

    //Sort the array
    sort(nums.begin(), nums.end());

    //Now finding maximum difference
    for (int i = 0; i < nums.size() - 1; i++){
        int sub = nums[i+1] - nums[i];
        //Comparing as in Selection Sort
        if (maxDifference < sub){
            maxDifference = sub;
        }
    }
    
    return maxDifference;
}

int main()
{
    vector<int> nums = {3,6,9,1};
    cout << maximumGap(nums);
    return 0;
}