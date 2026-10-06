class Solution {
public:
    // Time Complexity: O(log N)
    bool isUgly(int n) {
        // Ugly numbers must be positive integers
        if (n <= 0) return false;
        
        // Loop through the permitted prime factors
        for (int factor : {2, 3, 5}) {
            while (n % factor == 0) {
                n /= factor;
            }
        }
        
        // If n reduces to 1, it only had 2, 3, or 5 as prime factors
        return n == 1;
    }
};
