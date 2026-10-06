class Solution {
public:
    int singleNumber(vector<int>& nums) {
        // Your algorithm logic goes here
        int result = 0;
        for (int num : nums) {
            result ^= num;
        }
        return result;
    }
};
