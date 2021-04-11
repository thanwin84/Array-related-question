//https://practice.geeksforgeeks.org/problems/count-triplets-with-sum-smaller-than-x5549/1#
#include <bits/stdc++.h>
using namespace std;
class Solution{
public:
    long long countTriplets(long long arr[], int n, long long sum)
    {
        // Your code goes here
        sort(arr, arr+n);
        long long count = 0;
        for (int i=0; i < n-2; i++){
            long long start = i + 1, end = n-1;
            while (start < end){
                long long total = arr[i] + arr[start] + arr[end];
//                cout << arr[i] << " "<<arr[start] << " "<<arr[end]<< endl;
                if (total < sum){
                    count += (end - start);
                    start++;
                }
                else{
                    end--;
                }
            }
        }
        return count;
    }


};

int main() {
    long long arr[] = {-2, 0, 1, 3};
    Solution obj;
    cout << obj.countTriplets(arr, 4, 2);
    return 0;
}
