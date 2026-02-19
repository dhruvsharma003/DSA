class Solution {
public:
    int firstUniqueFreq(vector<int>& nums) {
        unordered_map<int, int> freq;
        
        // Step 1: count frequency of each number
        for (int x : nums) {
            freq[x]++;
        }
        
        unordered_map<int, int> freqCount;
        
        // Step 2: count frequency of frequencies
        for (auto &p : freq) {
            freqCount[p.second]++;
        }
        
        // Step 3: find first element with unique frequency
        for (int x : nums) {
            if (freqCount[freq[x]] == 1) {
                return x;
            }
        }
        
        return -1;
    }
};
