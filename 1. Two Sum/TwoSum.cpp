// rian-kh, 06/02/23
// 1. Two Sum

/*

Given an array of integers nums and an integer target, 
return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, 
and you may not use the same element twice.

You can return the answer in any order.

*/


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        // Answer array
        vector<int> x;

        // 1st index loop
        for (int a = 0; a < nums.size(); a++){

            // 2nd index loop
            for (int b = 0; b < nums.size(); b++) {

                // Sum of values at both indices
                int sum = nums[a] + nums[b];

                // If sums add to the target and the two values
                // aren't the same, return the array of both indices.
                if (sum == target && b != a) {
                    x = {b, a};
                    return x;
                }
            }
        }

        return x;
    }
};