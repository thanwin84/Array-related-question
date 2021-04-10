//time: optimized O(n2)
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        if (nums.size() < 3){
            return {};
        }
        int n = nums.size();
        sort(nums.begin(), nums.end());
        vector<vector<int>> result;
        for (int i = 0; i < n -2; i++){
            if (i == 0 || nums[i] != nums[i-1]){
                int start = i + 1, end = n -1;
                while (start < end){
                    int sum = nums[i] + nums[start] + nums[end];
                    if (sum == 0){
                        result.push_back({nums[i], nums[start], nums[end]});
                        while ( start < end && nums[start] == nums[start +1]) start++;
                        while (start < end && nums[end] == nums[end -1]) end --;
                        start++; end--;
                    }
                    else if (sum > 0) end--;
                    else start++;
                }
            }
        }
        return result;
    }
};
int main() {
    vector<int> arr = {-1,0,1,2,-1,-4};
    Solution obj;

    vector<vector<int>> output = obj.threeSum(arr);
    for (int i = 0; i < output.size(); i++){
        for(int j = 0; j < output[0].size(); j++){
            cout << output[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
