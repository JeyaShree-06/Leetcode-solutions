// The API isBadVersion is defined for you by the platform.
// bool isBadVersion(int version);

class Solution {
public:
    // Time Complexity: O(log N) | Space Complexity: O(1)
    int firstBadVersion(int n) {
        int left = 1;
        int right = n;
        
        while (left < right) {
            // Avoid potential integer overflow truncation (left + right) / 2
            int mid = left + (right - left) / 2; 
            
            if (isBadVersion(mid)) {
                // If mid is bad, the first bad version is either mid or to its left
                right = mid;
            } else {
                // If mid is good, the first bad version must be strictly to its right
                left = mid + 1;
            }
        }
        
        
        return left;
    }
};
