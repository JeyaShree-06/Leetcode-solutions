class Solution {
public:
    // Time Complexity: O(1) | Space Complexity: O(1)
    bool isPowerOfFour(int n) {
        // 1. A power of four must be strictly greater than 0.
        // 2. (n & (n - 1)) == 0 checks if the number has exactly one set bit (power of 2).
        // 3. (n & 0x55555555) != 0 ensures that single set bit is at an odd position.
        return n > 0 && (n & (n - 1)) == 0 && (n & 0x55555555) != 0;
    }
};
