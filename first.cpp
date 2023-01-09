#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void display(vector<int> ar){
	for (int i = 0; i < ar.size(); i++)
	{
		cout << ar[i] << " ";
	}
}

int main()
{
	vector<int> nums = {1,2,3,4,5,6,7};
	int k =3;

	reverse(nums.begin(), nums.begin()+k);

	display(nums);

	/*
	int n = nums.size();
	int ar[n] = {0};
	
	for (int i = 0; i < n; i++){
		int eleInd = i+k;
		
		if ( eleInd <= n - 1){
			ar[eleInd] = nums[i];
		}else{
			int ind = eleInd % n;
			ar[ind] = nums[i];
			
		}
	}
	
	nums.clear();
	
	for (int i = 0; i < n; i++){
		nums.push_back(ar[i]);
	}

	display(nums);
	*/
	
	return 0;
}