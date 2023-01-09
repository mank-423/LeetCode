#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void getRow(int rowIndex) {
    vector<vector<int>> res;
    
    for (int i = 1; i < rowIndex; i++){
        vector<int> temp;
        if (i == 1)
        {   
            temp.push_back(1);
            res.push_back(temp);
        }
        if (i == 2)
        {
            temp.push_back(1); temp.push_back(1);
            res.push_back(temp);
        }
        
        else
        {
            temp.insert(temp.begin(), 1); temp.insert(temp.end(), 1);
            for (int j = 1; j < i - 2; j++){
                temp.insert(temp.begin()+j, (res[i-1][j-1] + res[i-1][j]));
            }
        }
    }
    
    for (int i = 0; i < res.size(); i++){
        for (int j = 0; j < res[i].size(); j++)
        {
            cout << res[i][j] << " ";
        }
        cout << endl;
    }

    // int n = res.size();
    // return res[n-1];

}

void display(vector<int> ar){
	for (int i = 0; i < ar.size(); i++)
	{
		cout << ar[i] << " ";
	}
}

int main()
{
    vector<int> show;

    //show = getRow(1);
    //display(show);

    getRow(4);

    return 0;
}