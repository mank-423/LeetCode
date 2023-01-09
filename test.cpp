#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int minimumDeletions(vector<int>& nums) {
        int n = nums.size();

        int result = 0;
        int maxEle = 0, maxInd = 0;
        int minEle = 0, minInd = 0;
        int case1 = 0, case2 = 0, case3 = 0;

        if (n==1){
            result = 1;
        }

        else
        {
            //Finding max and min from array
            maxEle = *max_element(nums.begin(), nums.end());
            minEle = *min_element(nums.begin(), nums.end());
            
            //Index of min and max element
            for (int i = 0; i < n; i++){
                if (nums[i] == maxEle){ maxInd = i;}
                else if (nums[i] == minEle){ minInd = i;}
            }

            //Now using the three cases
            // +1 is added so as it will delete itself also
            //Subtraction will leave the element 

            //1. Front
            case1 = max(maxInd, minInd) + 1;
            
            //2.End
            case2 = max((n-maxInd), (n-minInd));

            //3.In between case i.e. Two cases for it also
            // - 10 - - - 1 - -
            // - 1 - - - - 10 -
            
            if (maxInd < minInd){ 
                case3 = (maxInd + 1) + (n - minInd); 
            }
            else{
                case3 = (minInd + 1) + (n - maxInd);
            }

            result = min({case1, case2, case3});

        }

        if (result == case1){cout << "case1\n";}
        else if (result == case2){cout << "case2\n";}
        else if(result == case3){cout << "case3\n";}

        return result;
}

void display(vector<string> v){
    for (auto x : v){
        cout << x << " ";
    }
}


int main()
{
    //vector<int> v1 = {2,10,7,5,4,1,8,6};
    // int res1 = minimumDeletions(v1); 
    // cout << "Result of 1st TC:" << res1 << "\n";
    
    string s = "  hello world  ";
    //string s = "This is me Mayank";
    //string s = "a good   example";
    //string s = "I    am a    string with     too   many   extra spaces";
    vector<string> words;      //Vector of words from sentence
    string newstr;            //Intermediate new string
    string one_word = "";

    int check=0;
    char c;
    int index=0;                //for indexing the new string
    int i=0;
    
    while(s[i]){                          //while loop runs till end of string
        c=s[i];
        if(isspace(c)&&check==0){           //check spaces
            newstr.insert(newstr.begin()+index++,s[i]);
            check=1;
        }else if(isalnum(c)){                //check alphabets and numbers
            newstr.insert(newstr.begin()+index++,s[i]);
            check=0;
        }
        i++;
    }

    cout << newstr << endl;
    
    for (int i = 0; i < newstr.length(); i++){
        if (isspace(newstr[i]) || i == newstr.length() - 1)
        {
            if (i ==  newstr.length() - 1){
                one_word += newstr[newstr.length() - 1];
            }
            
            words.push_back(one_word);
            one_word = "";            
        }else{
            one_word += newstr[i];
        }
    }  
    


    reverse(words.begin(), words.end());

    // for (int i = 0; i < words.size(); i++){
    //     cout << words[i] << endl;
    // }

    newstr = "";
    for (int i = 0; i < words.size(); i++){
        if (i == words.size() - 1){
            newstr += words[i];
        }
        else{
            newstr += words[i];
            newstr += " "; 
        }                  
    }

    //cout << newstr << endl;

    return 0;
}