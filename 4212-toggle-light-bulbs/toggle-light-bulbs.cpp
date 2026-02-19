class Solution {
public:
    vector<int> toggleLightBulbs(vector<int>& bulbs) {
        vector<int> state(101, 0); 
        for (int b : bulbs) {
            state[b] ^= 1;
        }     
        vector<int> result;
        for (int i = 1; i <= 100; i++) {
            if (state[i] == 1) {
                result.push_back(i);
            }
        }
        
        return result;
    }
};
