class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        // Calculate sum of first window
        int sum = 0;
        for(int i = 0; i < k; i++) {
            sum += nums[i];
        }
        
        // Initialize maxSum with first window's sum
        int maxSum = sum;
        
        // Slide the window through rest of array
        for(int i = k; i < nums.size(); i++) {
            // Remove leftmost element of previous window
            // Add new element to the right
            sum = sum - nums[i - k] + nums[i];
            maxSum = max(maxSum, sum);
        }
        
        // Return average (convert to double for floating-point division)
        return (double)maxSum / k;
    }
};