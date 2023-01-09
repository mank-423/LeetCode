#include<iostream>
#include<bits/stdc++.h>
using namespace std;

vector<vector<string>> groupAnagrams(vector<string>& strs) {

    map<string, vector<string>> mp;
    vector<vector<string>> result;

    if (strs.size() == 0){
        result.push_back({" "});
    }

    for (string i: strs){
        string temp = i;
        sort(temp.begin(), temp.end());
        //If we find the key
        if (mp.find(temp) != mp.end()){
            mp[temp].push_back(i);
        }
        //If key not found create new
        else{
            mp[temp].push_back(i);
        }
    }

    for (auto j : mp){
        result.push_back(j.second);
    }

    return result;
}

vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {    
    int ptr = 0; //Pointer for nums1
    vector<int> result; //Result storage
    int visited[nums2.size()] = {0}; //For considereing visited elements
    
    //Outer loop for nums1 
    //While loop used for pointer cantrol
    while (ptr != nums1.size())
    {
        //cout << "For Element " << nums1[ptr] << " : "; 
        //Inner loop for nums2
        for (int j = 0; j < nums2.size(); j++){
            if (nums1[ptr] == nums2[j] && visited[j] != 1){
                cout << nums1[ptr] << " " <<nums2[j]<< endl;
                visited[j] = 1;
                result.push_back(nums2[j]);
                break;
            }
        }
        ptr++;
    }
    return result;
}

int main()
{
    vector<int> list1 = {1,2,2,1};
    vector<int> list2 = {2};
    vector<string> ip1 = {"eat","tea","tan","ate","nat","bat"};
    vector<string> ip2 = {""};
    //result = intersect(list1, list2);
    //for(auto i: result){cout << i << " ";}
    groupAnagrams(ip1);
    
    return 0;
}