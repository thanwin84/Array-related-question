#include <bits/stdc++.h>
#define ll long long
using namespace std;
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        vector<vector<int>> result;
        for (int i = 0; i < n -3; i++){
            if (i == 0 || nums[i] != nums[i-1]){
                for (int j = i + 1; j < n -2; j++){
                    if(j == i+1 ||nums[j] != nums[j-1]){
                        int start = j+1, end = n -1;
                        while (start < end){
                            ll sum = nums[i] + nums[j] + nums[start] + nums[end];
                            if (sum == target){
                                result.push_back({nums[i], nums[j], nums[start], nums[end]});
                                while (start < end && nums[start] == nums[start+1]) start++;
                                while (start < end && nums[end] == nums[end -1]) end --;
                                start++;
                                end--;
                            }
                            else if (sum > target) end--;
                            else start++;
                        }

                    }
                }
            }

        }
        return result;

    }
};

int main() {
    vector<int> arr = {2,2, 2, 2, 2, 2};
    Solution obj;
    vector<vector<int>> output = obj.fourSum(arr, 8);
    for (int i = 0; i < output.size(); i++){
        for (int j = 0; j < output[0].size(); j++){
            cout << output[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
