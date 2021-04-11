//one pass
//https://leetcode.com/problems/two-sum/
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, vector<int>> table;
        vector<int> result;
        for (int i = 0; i < nums.size(); i++){
            if (table.count(nums[i])){
                table[nums[i]].push_back(i);
            }
            else {
                table[nums[i]] = {i};
            }
        }
        int toSearch;
        for(int i = 0; i < nums.size(); i++){
            toSearch = target - nums[i];
            if (nums[i] == toSearch){
                if (table.count(toSearch) and table[toSearch].size() > 1){

                    result.push_back(table[toSearch][0]);
                    result.push_back(table[toSearch][1]);
                    break;
                }
            }
            else if (table.count(toSearch)){

                result.push_back(i);
                result.push_back(table[toSearch][0]);
                break;
            }
        }

        return result;
    }
};
//one pass
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, vector<int>> table;
        vector<int> result;
        int toSearch;
        for(int i = 0; i < nums.size(); i++){
            if (table.count(nums[i])){
                table[nums[i]].push_back(i);
            }
            else {
                table[nums[i]] = {i};
            }
            toSearch = target - nums[i];
            if (nums[i] == toSearch){
                if (table.count(toSearch) and table[toSearch].size() > 1){

                    result.push_back(table[toSearch][0]);
                    result.push_back(table[toSearch][1]);
                    break;
                }
            }
            else if (table.count(toSearch)){

                result.push_back(i);
                result.push_back(table[toSearch][0]);
                break;
            }
        }

        return result;
    }
};
